@class NSArray, NSString, SBLockScreenLegibilitySettings;

@interface SBLockScreenPluginAppearanceContext : NSObject <SBLockScreenPluginMutableAppearance, SBLockScreenPluginAppearance, NSCopying, NSMutableCopying>

@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) unsigned long long restrictedCapabilities;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) long long presentationStyle;
@property (nonatomic) long long notificationBehavior;
@property (copy, nonatomic) NSArray *elementOverrides;
@property (retain, nonatomic) SBLockScreenLegibilitySettings *legibilitySettings;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } presentationRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppearance:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;

@end
