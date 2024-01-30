@interface SCNActionRemove : SCNAction {
    BOOL _hasFired;
}

+ (id)removeFromParentNode;
+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)reversedAction;
- (void)updateWithTarget:(id)a0 forTime:(double)a1;
- (void)willStartWithTarget:(id)a0 atTime:(double)a1;

@end
