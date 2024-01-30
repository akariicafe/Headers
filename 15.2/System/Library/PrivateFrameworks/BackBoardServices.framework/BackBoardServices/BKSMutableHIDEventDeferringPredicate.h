@class BKSHIDEventDisplay, BKSHIDEventDeferringToken, BKSHIDEventDeferringEnvironment;

@interface BKSMutableHIDEventDeferringPredicate : BKSHIDEventDeferringPredicate

@property (copy, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (copy, nonatomic) BKSHIDEventDisplay *display;
@property (copy, nonatomic) BKSHIDEventDeferringToken *token;

+ (id)new;

- (void)setEnvironment:(id)a0;
- (void)setDisplay:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setToken:(id)a0;

@end
