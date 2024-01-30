@class BKSHIDEventDispatchingTarget, NSString, BKSHIDEventDeferringToken, BKSHIDEventDisplay, BKSHIDEventDeferringEnvironment;

@interface BKSMutableHIDEventDeferringResolution : BKSHIDEventDeferringResolution

@property (copy, nonatomic) BKSHIDEventDisplay *display;
@property (copy, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (nonatomic) long long versionedPID;
@property (nonatomic) int pid;
@property (copy, nonatomic) BKSHIDEventDeferringToken *token;
@property (retain, nonatomic) BKSHIDEventDispatchingTarget *dispatchingTarget;
@property (copy, nonatomic) NSString *processDescription;

+ (id)new;

- (void)setToken:(id)a0;
- (void)setVersionedPID:(long long)a0;
- (void)setDisplay:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setPid:(int)a0;
- (void)setEnvironment:(id)a0;
- (void)setDispatchingTarget:(id)a0;
- (id)init;
- (void)setProcessDescription:(id)a0;

@end
