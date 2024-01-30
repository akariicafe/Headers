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

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)createActionViews;
- (unsigned long long)maxButtonsPerRow;
- (void)layoutButtons;
- (void)quickLinkItemViewSelected:(id)a0;
- (void)_captureTapActionWithAppClipLink:(id)a0;
- (void)_captureTapActionWithQuickLink:(id)a0;
- (void)infoCardThemeChanged;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (void)createConstraints;

@end
