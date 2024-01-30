@class NSString, NSArray, UIView, MKMapItem;
@protocol _MKInfoCardAnalyticsDelegate, MKPlaceQuickLinksViewControllerDelegate;

@interface MKPlaceQuickLinksViewController : MKPlaceSectionViewController <MKQuickLinkItemViewDelegate, MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    NSArray *_quickLinks;
    NSArray *_quickLinkViews;
    UIView *_contentView;
    unsigned long long _maxButtonsPerRow;
    NSArray *_constraints;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (weak, nonatomic) id<MKPlaceQuickLinksViewControllerDelegate> delegate;
@property (weak, nonatomic) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)placeQuickLinksViewControllerFor:(id)a0;

- (void)createConstraints;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)createActionViews;
- (unsigned long long)maxButtonsPerRow;
- (void)layoutButtons;
- (void)infoCardThemeChanged;
- (void)quickLinkItemViewSelected:(id)a0;
- (void)_captureTapActionWithAppClipLink:(id)a0;
- (void)_captureTapActionWithQuickLink:(id)a0;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
