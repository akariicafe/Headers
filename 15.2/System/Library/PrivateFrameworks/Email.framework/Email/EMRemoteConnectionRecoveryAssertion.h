@protocol EMRemoteConnectionRecoveryAssertionDelegate;

@interface EMRemoteConnectionRecoveryAssertion : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<EMRemoteConnectionRecoveryAssertionDelegate> delegate;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;

@end
