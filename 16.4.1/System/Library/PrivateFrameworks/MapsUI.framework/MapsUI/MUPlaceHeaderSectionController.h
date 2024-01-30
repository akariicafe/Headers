@class UILayoutGuide, NSString, MUPlaceHeaderView, MUPlaceHeaderSectionControllerConfiguration;
@protocol _MKPlaceItem, MUPlaceHeaderSectionControllerDelegate;

@interface MUPlaceHeaderSectionController : MUPlaceSectionController <MUPlaceHeaderViewDelegate> {
    MUPlaceHeaderView *_headerView;
    id<_MKPlaceItem> _placeItem;
    MUPlaceHeaderSectionControllerConfiguration *_configuration;
}

@property (weak, nonatomic) id<MUPlaceHeaderSectionControllerDelegate> headerDelegate;
@property (readonly, nonatomic) BOOL shouldBlurChromeHeaderButtons;
@property (readonly, nonatomic) UILayoutGuide *headerViewTitleLabelToTopLayoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)minimalModeHeight;

- (void).cxx_destruct;
- (id)draggableContent;
- (id)sectionView;
- (void)_notifyDidTapParentMapItem:(id)a0;
- (void)_populateRevealedAnalyticsModule:(id)a0;
- (void)_setupHeaderView;
- (int)analyticsModuleType;
- (void)headerView:(id)a0 didSelectEnclosingMapItem:(id)a1;
- (void)headerView:(id)a0 didSelectEnclosingMapItemIdentifier:(id)a1;
- (void)headerView:(id)a0 didSelectShareWithPresentationOptions:(id)a1;
- (void)hideTitle:(BOOL)a0;
- (id)initWithPlaceItem:(id)a0 configuration:(id)a1;
- (BOOL)isImpressionable;
- (void)setCardExpansionProgress:(double)a0;
- (double)verifiedBusinessHeaderHeight;
- (void)verifiedBusinessHeaderScrollPositionChanged:(double)a0;

@end
