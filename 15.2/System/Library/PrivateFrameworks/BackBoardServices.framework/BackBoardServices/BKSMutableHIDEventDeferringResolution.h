@class NSString, BKSHIDEventDeferringToken, BKSHIDEventDisplay, BKSHIDEventDeferringEnvironment;

@interface BKSMutableHIDEventDeferringResolution : BKSHIDEventDeferringResolution

@property (copy, nonatomic) BKSHIDEventDisplay *display;
@property (copy, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (nonatomic) long long versionedPID;
@property (nonatomic) int pid;
@property (copy, nonatomic) BKSHIDEventDeferringToken *token;
@property (copy, nonatomic) NSString *bundleIdentifier;

+ (id)new;

- (void)setEnvironment:(id)a0;
- (void)setDisplay:(id)a0;
- (void)setPid:(int)a0;
- (void)setBundleIdentifier:(id)a0;
- (void)setVersionedPID:(long long)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setToken:(id)a0;

@end
