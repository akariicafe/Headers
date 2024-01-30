@class MUPlaceSectionFooterViewModel, NSString, MUPlaceSectionHeaderViewModel, MKUGCCallToActionViewAppearance, UIView, MUFooterActionsSectionController, UIViewController;
@protocol MUInfoCardAnalyticsDelegate;

@interface MUPlaceFooterActionsSectionController : MUPlaceSectionController <MUPlaceSectionControlling> {
    MUFooterActionsSectionController *_underlyingSectionController;
}

@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (void).cxx_destruct;
- (id)analyticsModule;
- (int)analyticsModuleType;
- (id)initWithMapItem:(id)a0 actionManager:(id)a1;

@end
