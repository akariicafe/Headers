@interface FBSMutableSceneSettings : FBSSceneSettings

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) double level;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, getter=isForeground) BOOL foreground;
@property (nonatomic, getter=isBackgrounded) BOOL backgrounded;
@property (nonatomic) long long interruptionPolicy;

+ (BOOL)_isMutable;

- (void)setForeground:(BOOL)a0;
- (void)setLevel:(double)a0;
- (void)setDisplayConfiguration:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setInterfaceOrientation:(long long)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setOccluded:(BOOL)a0;
- (id)otherSettings;
- (void)setBackgrounded:(BOOL)a0;
- (id)transientLocalSettings;
- (void)_setDisplayConfiguration:(id)a0;
- (id)ignoreOcclusionReasons;
- (void)setActivityMode:(char)a0;
- (void)setInterruptionPolicy:(long long)a0;
- (void)setJetsamMode:(char)a0;

@end
