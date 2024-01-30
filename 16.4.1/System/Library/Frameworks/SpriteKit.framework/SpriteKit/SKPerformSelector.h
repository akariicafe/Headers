@protocol NSObject;

@interface SKPerformSelector : SKAction {
    SEL _selector;
    id<NSObject> _weakTarget;
    id<NSObject> _strongTarget;
}

+ (BOOL)supportsSecureCoding;
+ (id)perfromSelector:(SEL)a0 onTarget:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)reversedAction;
- (void)updateWithTarget:(id)a0 forTime:(double)a1;

@end
