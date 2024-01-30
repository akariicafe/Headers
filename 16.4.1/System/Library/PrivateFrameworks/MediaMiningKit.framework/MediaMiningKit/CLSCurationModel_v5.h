@class CLSNSFWModel, CLSCLIPprintModel, CLSCityNatureModel, CLSWallpaperScoreModel;

@interface CLSCurationModel_v5 : CLSCurationModel_v4

@property (readonly) CLSWallpaperScoreModel *wallpaperScoreModel;
@property (readonly) CLSCLIPprintModel *CLIPprintModel;
@property (readonly) CLSCityNatureModel *cityNatureModel;
@property (readonly) CLSNSFWModel *nsfwModel;

+ (id)baseSpecificationWithSpecification:(id)a0;

- (void).cxx_destruct;
- (BOOL)isShowcasingFoodWithAsset:(id)a0;
- (void)enumerateClassificationBasedSignalModelsUsingBlock:(id /* block */)a0;
- (void)enumerateSignalModelsUsingBlock:(id /* block */)a0;
- (id)initWithCurationModelSpecification:(id)a0;

@end
