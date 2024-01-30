@class RCWeakRef;

@interface RCWeakDisplayLinkTargetProxy : RCDisplayLinkTargetProxy {
    RCWeakRef *_weakTarget;
    SEL _weakTargetSelector;
}

- (void)displayLinkFired:(id)a0;
- (void)dealloc;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;

@end
