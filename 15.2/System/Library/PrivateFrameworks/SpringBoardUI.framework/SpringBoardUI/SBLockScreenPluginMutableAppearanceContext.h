@class NSArray, NSString, SBLockScreenLegibilitySettings;

@interface SBLockScreenPluginMutableAppearanceContext : SBLockScreenPluginAppearanceContext <SBLockScreenPluginMutableAppearance>

@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) unsigned long long restrictedCapabilities;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) long long presentationStyle;
@property (nonatomic) long long notificationBehavior;
@property (copy, nonatomic) NSArray *elementOverrides;
@property (retain, nonatomic) SBLockScreenLegibilitySettings *legibilitySettings;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } presentationRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
