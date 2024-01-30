@interface SCNActionCustom : SCNAction

+ (BOOL)supportsSecureCoding;
+ (id)customActionWithDuration:(double)a0 actionBlock:(id /* block */)a1;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isCustom;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)reversedAction;

@end
