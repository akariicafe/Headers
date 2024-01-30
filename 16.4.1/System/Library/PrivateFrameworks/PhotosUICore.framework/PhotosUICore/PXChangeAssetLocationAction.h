@class PXAnnotatedLocation, CLLocation;

@interface PXChangeAssetLocationAction : PXAssetLocationAction {
    CLLocation *_preciseLocation;
    BOOL _shifted;
}

@property (readonly, nonatomic) PXAnnotatedLocation *annotatedLocation;
@property (readonly, nonatomic) long long sourceType;

- (id)actionIdentifier;
- (void).cxx_destruct;
- (id)actionNameLocalizationKey;
- (id)analyticsActionString;
- (id)analyticsPlaceLevelString;
- (id)initWithAssets:(id)a0 annotatedLocation:(id)a1 sourceType:(long long)a2;
- (id)locationForAsset:(id)a0 shifted:(BOOL *)a1;

@end
