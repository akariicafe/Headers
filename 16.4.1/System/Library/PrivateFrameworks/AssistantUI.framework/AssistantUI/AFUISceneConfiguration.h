@class FBSDisplayConfiguration, FBSSceneParameters;

@interface AFUISceneConfiguration : NSObject <NSCopying> {
    FBSDisplayConfiguration *_displayConfiguration;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) BOOL foreground;
@property (nonatomic) long long launchIntent;
@property (nonatomic) long long preferredDeferralMode;
@property (nonatomic) BOOL cancelSceneLoadingAfterTimeout;
@property (nonatomic) double sceneLoadingTimeOutDuration;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialBounds;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } initialSafeAreaInsets;
@property (copy, nonatomic) FBSSceneParameters *sceneParameters;
@property (nonatomic) long long userInterfaceStyle;
@property (nonatomic) unsigned long long deactivationReasonMask;

+ (id)defaultSiriSceneConfigurationWithInitialBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onDisplay:(id)a1;
+ (id)stringForInvalidationReason:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithInitialBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayConfiguration:(id)a1;
- (void)_setupPlatformSpecificDefaultSettings;
- (void)configureMutableSceneSettings:(id)a0;

@end
