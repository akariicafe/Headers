@class MUExpandableBlurbView, MUPlaceFooterAttributionController, MUPlaceDescriptionConfiguration, MUPlaceSectionView;
@protocol MUPlaceDescriptionSectionControllerDelegate;

@interface MUPlaceDescriptionSectionController : MUPlaceSectionController {
    MUPlaceDescriptionConfiguration *_configuration;
    MUExpandableBlurbView *_blurbView;
    MUPlaceSectionView *_sectionView;
    MUPlaceFooterAttributionController *_footerAttributionController;
}

@property (weak, nonatomic) id<MUPlaceDescriptionSectionControllerDelegate> actionDelegate;

- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (id)sectionView;
- (void)_setupTextBlurb;
- (void)_attributionTapped;
- (int)analyticsModuleType;
- (id)initWithMapItem:(id)a0 configuration:(id)a1;
- (BOOL)isImpressionable;
- (id)sectionFooterViewModel;
- (id)sectionHeaderViewModel;

@end
