@class NSString, NSXPCConnection;
@protocol MRUIServerXPCProtocol;

@interface MRUIController : NSObject <MRLockScreenUIControllable, MRQuickControlsUIControllable, MRScreenMirroringQuickControlsUIControllable, MRUIContextProviding>

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) id<MRUIServerXPCProtocol> server;
@property (nonatomic) BOOL hasLockScreenControlsAssertion;
@property (nonatomic) BOOL hasQuickControlsAssertion;
@property (nonatomic) BOOL hasScreenMirroringQuickControlsAssertion;
@property (nonatomic) BOOL shouldRestoreState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasUIAssertions;
- (void)_restoreState;
- (void)acquireLockScreenControlsAssertion;
- (id)acquireQuickControlsAssertion;
- (void)acquireScreenMirroringQuickControlsAssertion;
- (id)contextForActivityIdentifier:(id)a0;
- (void)releaseLockScreenControlsAssertion;
- (void)releaseQuickControlsAssertion;
- (void)releaseScreenMirroringQuickControlsAssertion;

@end
