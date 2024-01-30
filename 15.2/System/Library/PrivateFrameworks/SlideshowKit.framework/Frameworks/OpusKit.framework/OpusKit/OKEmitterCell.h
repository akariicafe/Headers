@class NSString, NSURL;

@interface OKEmitterCell : CAEmitterCell <OKSettingsSupport> {
    NSURL *_contentURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (id)initWithSettings:(id)a0;
- (BOOL)settingEnabled;
- (void)dealloc;
- (id)settingName;
- (void)setSettingName:(id)a0;
- (void)setSettingEnabled:(BOOL)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)parentLoaded:(id)a0;
- (float)settingAlphaRange;
- (void)setSettingAlphaRange:(float)a0;
- (float)settingAlphaSpeed;
- (void)setSettingAlphaSpeed:(float)a0;
- (float)settingBirthRate;
- (void)setSettingBirthRate:(float)a0;
- (float)settingBlueRange;
- (void)setSettingBlueRange:(float)a0;
- (float)settingBlueSpeed;
- (void)setSettingBlueSpeed:(float)a0;
- (id)settingColor;
- (void)setSettingColor:(id)a0;
- (id)settingContents;
- (void)setSettingContents:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })settingContentsRect;
- (void)setSettingContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)settingEmissionLatitude;
- (void)setSettingEmissionLatitude:(double)a0;
- (double)settingEmissionLongitude;
- (void)setSettingEmissionLongitude:(double)a0;
- (double)settingEmissionRange;
- (void)setSettingEmissionRange:(double)a0;
- (id)settingEmitterCells;
- (void)setSettingEmitterCells:(id)a0;
- (float)settingGreenRange;
- (void)setSettingGreenRange:(float)a0;
- (float)settingGreenSpeed;
- (void)setSettingGreenSpeed:(float)a0;
- (float)settingLifetime;
- (void)setSettingLifetime:(float)a0;
- (float)settingLifetimeRange;
- (void)setSettingLifetimeRange:(float)a0;
- (id)settingMagnificationFilter;
- (void)setSettingMagnificationFilter:(id)a0;
- (id)settingMinificationFilter;
- (void)setSettingMinificationFilter:(id)a0;
- (float)settingMinificationFilterBias;
- (void)setSettingMinificationFilterBias:(float)a0;
- (float)settingRedRange;
- (void)setSettingRedRange:(float)a0;
- (float)settingRedSpeed;
- (void)setSettingRedSpeed:(float)a0;
- (double)settingScale;
- (void)setSettingScale:(double)a0;
- (double)settingScaleRange;
- (void)setSettingScaleRange:(double)a0;
- (double)settingScaleSpeed;
- (void)setSettingScaleSpeed:(double)a0;
- (double)settingSpin;
- (void)setSettingSpin:(double)a0;
- (double)settingSpinRange;
- (void)setSettingSpinRange:(double)a0;
- (id)settingStyle;
- (void)setSettingStyle:(id)a0;
- (double)settingVelocity;
- (void)setSettingVelocity:(double)a0;
- (double)settingVelocityRange;
- (void)setSettingVelocityRange:(double)a0;
- (double)settingXAcceleration;
- (void)setSettingXAcceleration:(double)a0;
- (double)settingYAcceleration;
- (void)setSettingYAcceleration:(double)a0;
- (double)settingZAcceleration;
- (void)setSettingZAcceleration:(double)a0;

@end
