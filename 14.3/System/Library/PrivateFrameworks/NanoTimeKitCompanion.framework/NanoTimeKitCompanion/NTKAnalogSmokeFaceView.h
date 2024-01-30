@class NSDictionary;

@interface NTKAnalogSmokeFaceView : NTKAnalogVideoFaceView {
    BOOL _shouldApplyTransform;
}

@property (nonatomic) unsigned long long currentSmokeColor;
@property (nonatomic) unsigned long long currentDialShape;
@property (retain, nonatomic) NSDictionary *dataSources;

+ (id)_swatchImageForColorOption:(id)a0 forDevice:(id)a1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)a0 forDevice:(id)a1;
+ (id)_nameForSmokeColor:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_configureTimeView:(id)a0;
- (BOOL)_wantsConstantSpeedZoom;
- (id)imageForEditOption:(id)a0;
- (void)_customizeVideoPlayerOnSetup;
- (void)_handleEitherScreenWake;
- (id)_complicationsCompanionForegroundColor;
- (void)reloadDataSources;
- (void)_applyVideoPlayerTransform;
- (void)_updateDialSize;
- (void)setupDataSources;
- (id)_swatchImageForSmokeColor:(unsigned long long)a0 andDialShape:(unsigned long long)a1;

@end
