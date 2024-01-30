@class UIView, MUPlaceSectionFooterViewModel, NSString, NSArray, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, NSDictionary, UIViewController, MUPlaceVerticalCardContainerView, MKUGCCallToActionViewAppearance;
@protocol MUInfoCardAnalyticsDelegate, MUPersonalGuidesViewProvider;

@interface MUPersonalGuidesSectionController : MUPlaceSectionController <MUPlaceVerticalCardContainerViewDelegate, MUPlaceSectionControlling> {
    id<MUPersonalGuidesViewProvider> _viewProvider;
    MUPlaceVerticalCardContainerView *_containerView;
    MUPlaceSectionView *_sectionView;
    NSDictionary *_collectionViews;
    NSDictionary *_wrappedSectionViewsByIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) UIViewController *sectionViewController;

- (void).cxx_destruct;
- (void)_setupSectionView;
- (int)analyticsModuleType;
- (id)initWithMapItem:(id)a0 collectionViewProvider:(id)a1;
- (BOOL)isImpressionable;
- (void)reloadCollectionsAnimated:(BOOL)a0;
- (void)verticalCardContainerView:(id)a0 didSelectRow:(id)a1 atIndex:(unsigned long long)a2;

@end
