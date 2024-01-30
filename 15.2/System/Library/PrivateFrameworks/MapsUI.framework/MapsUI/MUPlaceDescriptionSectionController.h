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
- (id)sectionView;
- (id)infoCardChildPossibleActions;
- (id)sectionFooterViewModel;
- (int)analyticsModuleType;
- (id)initWithMapItem:(id)a0 configuration:(id)a1;
- (void)_attributionTapped;
- (void)_setupTextBlurb;

@end
