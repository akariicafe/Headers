@class NSString, PKNotifyRegistration;

@interface PKNotifySubregistration : NSObject <PKInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PKNotifyRegistration *_parent;
    id /* block */ _handler;
}

@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParent:(id)a0 handler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invokeHandler;
- (void)_invalidateFromParent:(BOOL)a0;
- (void)invalidate;

@end
