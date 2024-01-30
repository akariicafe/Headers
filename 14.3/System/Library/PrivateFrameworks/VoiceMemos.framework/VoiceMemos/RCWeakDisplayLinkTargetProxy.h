@class RCWeakRef;

@interface RCWeakDisplayLinkTargetProxy : RCDisplayLinkTargetProxy {
    RCWeakRef *_weakTarget;
    SEL _weakTargetSelector;
}

- (void)dealloc;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void)displayLinkFired:(id)a0;

@end
