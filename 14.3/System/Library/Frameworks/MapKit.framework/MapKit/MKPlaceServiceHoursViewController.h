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

+ (id)titleString;
+ (id)placeServiceHoursWithMapItem:(id)a0 type:(long long)a1;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (unsigned long long)_maxRows;
- (id)initWithMapItem:(id)a0 type:(long long)a1;
- (void)_showAllHeaderButtonTapped;
- (void)_updateServiceHourRows;
- (void)captureCloseAnalytics;
- (void)_contentSizeDidChange;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
