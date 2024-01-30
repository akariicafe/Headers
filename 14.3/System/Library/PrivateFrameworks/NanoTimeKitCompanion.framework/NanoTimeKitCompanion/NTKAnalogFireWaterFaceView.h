@class NSDictionary;

@interface NTKAnalogFireWaterFaceView : NTKAnalogVideoFaceView

@property (nonatomic) unsigned long long currentColor;
@property (nonatomic) unsigned long long currentDialShape;
@property (retain, nonatomic) NSDictionary *dataSources;

+ (id)_swatchImageForColorOption:(id)a0 forDevice:(id)a1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)a0 forDevice:(id)a1;
+ (id)_nameForColor:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (BOOL)_wantsConstantSpeedZoom;
- (id)imageForEditOption:(id)a0;
- (void)_customizeVideoPlayerOnSetup;
- (id)_complicationsCompanionForegroundColor;
- (void)reloadDataSources;
- (void)_updateDialSize;
- (void)setupDataSources;
- (id)_swatchImageForColor:(unsigned long long)a0 andDialShape:(unsigned long long)a1;

@end
