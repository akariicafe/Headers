@protocol NSObject;

@interface HMProxyObjectIVar : HMProxyObject {
    id<NSObject> _target;
}

- (void)dealloc;
- (id)self;

@end
