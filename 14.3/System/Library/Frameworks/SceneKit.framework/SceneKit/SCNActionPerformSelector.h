@interface SCNActionPerformSelector : SCNAction {
    SEL _selector;
    id _target;
}

+ (BOOL)supportsSecureCoding;
+ (id)performSelector:(SEL)a0 onTarget:(id)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isCustom;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)reversedAction;
- (void)updateWithTarget:(id)a0 forTime:(double)a1;

@end
