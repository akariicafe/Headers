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
- (void)setSettingBirthRate:(float)a0;
- (void)setSettingSpinRange:(double)a0;
- (double)settingVelocity;
- (float)settingGreenSpeed;
- (void)setSettingAlphaRange:(float)a0;
- (void)setSettingMinificationFilterBias:(float)a0;
- (id)settingMinificationFilter;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })settingContentsRect;
- (double)settingScaleRange;
- (double)settingEmissionLongitude;
- (float)settingGreenRange;
- (void)setSettingEmissionLongitude:(double)a0;
- (id)settingEmitterCells;
- (void)setSettingScaleRange:(double)a0;
- (void)setSettingVelocity:(double)a0;
- (double)settingScale;
- (double)settingSpinRange;
- (void)setSettingEmissionRange:(double)a0;
- (void)setSettingBlueRange:(float)a0;
- (float)settingAlphaSpeed;
- (void)setSettingSpin:(double)a0;
- (void)setSettingEmissionLatitude:(double)a0;
- (void)setSettingRedRange:(float)a0;
- (id)settingColor;
- (float)settingBirthRate;
- (float)settingAlphaRange;
- (BOOL)settingEnabled;
- (void)parentLoaded:(id)a0;
- (double)settingScaleSpeed;
- (void)setSettingLifetime:(float)a0;
- (void)setSettingMinificationFilter:(id)a0;
- (double)settingSpin;
- (id)settingStyle;
- (id)settingName;
- (void)setSettingMagnificationFilter:(id)a0;
- (void)setSettingScale:(double)a0;
- (void)setSettingRedSpeed:(float)a0;
- (void)setSettingGreenSpeed:(float)a0;
- (float)settingBlueSpeed;
- (void)setSettingName:(id)a0;
- (void)setSettingLifetimeRange:(float)a0;
- (float)settingLifetime;
- (float)settingRedSpeed;
- (double)settingEmissionRange;
- (void)setSettingBlueSpeed:(float)a0;
- (void)setSettingGreenRange:(float)a0;
- (id)settingMagnificationFilter;
- (void)setSettingXAcceleration:(double)a0;
- (float)settingMinificationFilterBias;
- (float)settingLifetimeRange;
- (void)setSettingContents:(id)a0;
- (void)dealloc;
- (void)setSettingEmitterCells:(id)a0;
- (double)settingEmissionLatitude;
- (double)settingXAcceleration;
- (void)setSettingEnabled:(BOOL)a0;
- (void)setSettingScaleSpeed:(double)a0;
- (float)settingRedRange;
- (double)settingYAcceleration;
- (void)setSettingColor:(id)a0;
- (float)settingBlueRange;
- (id)settingContents;
- (id)settingObjectForKey:(id)a0;
- (double)settingZAcceleration;
- (void)setSettingContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)setSettingVelocityRange:(double)a0;
- (void)setSettingStyle:(id)a0;
- (void)setSettingZAcceleration:(double)a0;
- (double)settingVelocityRange;
- (void)setSettingAlphaSpeed:(float)a0;
- (void)setSettingYAcceleration:(double)a0;

@end
