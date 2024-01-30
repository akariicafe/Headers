@interface SCNActionCustom : SCNAction

+ (BOOL)supportsSecureCoding;
+ (id)customActionWithDuration:(double)a0 actionBlock:(id /* block */)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isCustom;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)reversedAction;

@end
