@class NSString, BSServiceConnection;

@interface CRSInCallAssertion : NSObject <CRSInCallServerToClientInterface, BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_pendingPresent;
    BOOL _lock_presented;
    BOOL _lock_activated;
    BOOL _lock_invalidated;
    BOOL _lock_allowsBanners;
}

@property (copy, nonatomic) NSString *reason;
@property (retain, nonatomic) BSServiceConnection *connection;
@property (nonatomic) BOOL allowsBanners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)activate;
- (void)invalidate;
- (id)initWithReason:(id)a0;
- (void)_handleConnectionInterrupted;
- (void)_handleConnectionActivated;

@end
