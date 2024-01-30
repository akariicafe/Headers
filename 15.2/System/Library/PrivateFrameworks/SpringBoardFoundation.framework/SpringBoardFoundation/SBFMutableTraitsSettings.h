@class SBFTraitsSettingsOrientation, SBFTraitsSettingsZOrderLevel;

@interface SBFMutableTraitsSettings : SBFTraitsSettings

@property (retain, nonatomic) SBFTraitsSettingsZOrderLevel *zOrderLevelSettings;
@property (retain, nonatomic) SBFTraitsSettingsOrientation *orientationSettings;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setZOrderLevelSettings:(id)a0;
- (void)setOrientationSettings:(id)a0;

@end
