@class NSString, NSURL;

@interface OKEmitterCell : CAEmitterCell <OKSettingsSupport> {
    NSURL *_contentURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (BOOL)settingEnabled;
- (id)settingContents;
- (void)setSettingVelocity:(double)a0;
- (id)settingStyle;
- (float)settingRedSpeed;
- (float)settingLifetime;
- (void)setSettingEmissionRange:(double)a0;
- (void)setSettingSpinRange:(double)a0;
- (void)setSettingContents:(id)a0;
- (void)setSettingXAcceleration:(double)a0;
- (double)settingScaleSpeed;
- (void)setSettingSpin:(double)a0;
- (double)settingSpin;
- (float)settingRedRange;
- (id)settingColor;
- (void)setSettingLifetime:(float)a0;
- (double)settingXAcceleration;
- (void)setSettingScaleRange:(double)a0;
- (id)settingName;
- (float)settingAlphaSpeed;
- (void)setSettingMinificationFilterBias:(float)a0;
- (void)setSettingAlphaSpeed:(float)a0;
- (double)settingZAcceleration;
- (void)setSettingLifetimeRange:(float)a0;
- (void)setSettingEmissionLatitude:(double)a0;
- (float)settingGreenSpeed;
- (id)settingMinificationFilter;
- (double)settingSpinRange;
- (void)setSettingGreenRange:(float)a0;
- (void)setSettingName:(id)a0;
- (void)setSettingEnabled:(BOOL)a0;
- (void)setSettingScaleSpeed:(double)a0;
- (double)settingScaleRange;
- (void)setSettingBlueSpeed:(float)a0;
- (float)settingBirthRate;
- (id)settingMagnificationFilter;
- (float)settingAlphaRange;
- (void)setSettingEmitterCells:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })settingContentsRect;
- (void)setSettingContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)settingLifetimeRange;
- (float)settingMinificationFilterBias;
- (float)settingBlueRange;
- (float)settingGreenRange;
- (double)settingEmissionLatitude;
- (void)dealloc;
- (void)parentLoaded:(id)a0;
- (void)setSettingGreenSpeed:(float)a0;
- (void)setSettingEmissionLongitude:(double)a0;
- (double)settingVelocity;
- (id)settingObjectForKey:(id)a0;
- (void)setSettingVelocityRange:(double)a0;
- (void)setSettingMinificationFilter:(id)a0;
- (void)setSettingStyle:(id)a0;
- (id)settingEmitterCells;
- (id)initWithSettings:(id)a0;
- (void)setSettingScale:(double)a0;
- (void)setSettingMagnificationFilter:(id)a0;
- (double)settingYAcceleration;
- (void)setSettingBirthRate:(float)a0;
- (double)settingEmissionRange;
- (float)settingBlueSpeed;
- (void)setSettingZAcceleration:(double)a0;
- (void)setSettingYAcceleration:(double)a0;
- (double)settingScale;
- (double)settingEmissionLongitude;
- (double)settingVelocityRange;
- (void)setSettingColor:(id)a0;
- (void)setSettingAlphaRange:(float)a0;
- (void)setSettingRedRange:(float)a0;
- (void)setSettingRedSpeed:(float)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)setSettingBlueRange:(float)a0;

@end
