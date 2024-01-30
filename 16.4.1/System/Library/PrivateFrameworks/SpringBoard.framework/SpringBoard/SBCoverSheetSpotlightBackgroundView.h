@class MTMaterialView;

@interface SBCoverSheetSpotlightBackgroundView : UIView <SBSpotlightBackgroundWeighting>

@property (readonly, nonatomic) MTMaterialView *searchLumSatBackdropView;
@property (readonly, nonatomic) MTMaterialView *searchBlurBackdropView;
@property (nonatomic) double spotlightBackgroundWeighting;

- (id)init;
- (void).cxx_destruct;

@end
