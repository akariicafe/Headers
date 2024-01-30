@class NSUUID, NSString, BKSAnimationFenceHandle, BSServiceConnection, BSAnimationSettings;

@interface CRSUIStatusBarStyleAssertion : NSObject <CRSUIStatusBarStyleServerToClientInterface, BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_acquired;
    BOOL _lock_connectionActivated;
    BOOL _lock_invalidated;
    BOOL _lock_pendingAcquire;
    BKSAnimationFenceHandle *_lock_pendingAcquireFence;
    BSAnimationSettings *_lock_pendingAcquireAnimationSettings;
}

@property (retain, nonatomic) BSServiceConnection *connection;
@property (retain, nonatomic) NSUUID *identifier;
@property (nonatomic) long long interfaceStyle;
@property (nonatomic) long long contrast;
@property (nonatomic) BOOL siriPresentation;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)reliquishWithAnimationSettings:(id)a0;
- (void)_handleConnectionActivated;
- (void)acquireWithAnimationSettings:(id)a0;
- (id)initForSiriPresentation;
- (id)initWithInterfaceStyle:(long long)a0 contrast:(long long)a1;
- (id)initWithInterfaceStyle:(long long)a0 contrast:(long long)a1 siriPresentation:(BOOL)a2;

@end
