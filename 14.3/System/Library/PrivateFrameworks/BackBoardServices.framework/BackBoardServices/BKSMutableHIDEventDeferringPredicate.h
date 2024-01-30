@class BKSHIDEventDisplay, BKSHIDEventDeferringToken, BKSHIDEventDeferringEnvironment;

@interface BKSMutableHIDEventDeferringPredicate : BKSHIDEventDeferringPredicate

@property (retain, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (copy, nonatomic) BKSHIDEventDisplay *display;
@property (copy, nonatomic) BKSHIDEventDeferringToken *token;

+ (id)new;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setToken:(id)a0;
- (void)setEnvironment:(id)a0;
- (void)setDisplay:(id)a0;

@end
