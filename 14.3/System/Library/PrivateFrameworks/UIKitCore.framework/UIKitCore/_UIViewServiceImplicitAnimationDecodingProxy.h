@class NSString, _UIViewAnimationAttributes;

@interface _UIViewServiceImplicitAnimationDecodingProxy : _UITargetedProxy <_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface> {
    SEL _implicitAnimationSelector;
    _UIViewAnimationAttributes *_animationAttributes;
    BOOL _animationsEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyDecodingAnimationsForTarget:(id)a0;

- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (void)__animateNextInvocationOfSelector:(id)a0 withAnimationAttributes:(id)a1 animationsEnabled:(BOOL)a2;

@end
