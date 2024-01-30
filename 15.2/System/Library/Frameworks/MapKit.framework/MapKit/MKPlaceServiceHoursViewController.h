@class MKPlaceSectionHeaderView, NSString, UIStackView, UIScrollView, MKMapItem;
@protocol MKPlaceServiceHoursViewControllerProtocol;

@interface MKPlaceServiceHoursViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {
    BOOL _isExpanded;
    MKPlaceSectionHeaderView *_headerView;
    long long _type;
    UIStackView *_stackView;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic) BOOL expanded;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<MKPlaceServiceHoursViewControllerProtocol> placeServiceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)placeServiceHoursWithMapItem:(id)a0 type:(long long)a1;
+ (id)titleString;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)_contentSizeDidChange;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (unsigned long long)_maxRows;
- (id)initWithMapItem:(id)a0 type:(long long)a1;
- (void)_showAllHeaderButtonTapped;
- (void)_updateServiceHourRows;
- (void)captureCloseAnalytics;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;

@end
