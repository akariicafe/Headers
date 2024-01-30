@class BKSProcessExitContext, BKSLaunchdJobSpecification, RBSProcessIdentity, BKSProcessAssertion, RBSProcessHandle, RBSProcessMonitor, BSProcessHandle, RBSAssertion;
@protocol BKSProcessDelegate;

@interface BKSProcess : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _bootstrapped;
    RBSProcessIdentity *_identity;
    RBSProcessHandle *_processHandle;
    BKSLaunchdJobSpecification *_jobSpec;
    RBSAssertion *_assertion;
    RBSProcessMonitor *_monitor;
    BKSProcessExitContext *_lastExitContext;
    BKSProcessAssertion *_mediaAssertion;
    BKSProcessAssertion *_audioAssertion;
    BKSProcessAssertion *_accessoryAssertion;
    RBSAssertion *_visibilityAssertion;
}

@property (nonatomic) BOOL workspaceLocked;
@property (nonatomic) long long visibility;
@property (nonatomic) BOOL connectedToExternalAccessories;
@property (nonatomic) BOOL nowPlayingWithAudio;
@property (nonatomic) BOOL recordingAudio;
@property (nonatomic) long long terminationReason;
@property (weak, nonatomic) id<BKSProcessDelegate> delegate;
@property (readonly, nonatomic) BSProcessHandle *handle;
@property (readonly, nonatomic) long long taskState;
@property (readonly, nonatomic) double backgroundTimeRemaining;
@property (readonly, nonatomic) BKSProcessExitContext *lastExitContext;

+ (id)currentProcess;
+ (double)backgroundTimeRemaining;
+ (id)busyExtensionInstances:(id)a0;

- (id)initWithBundleIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)bootstrapCurrentProcess;
- (id)initWithProcessIdentity:(id)a0;
- (BOOL)bootstrapWithProcessHandle:(id)a0 error:(out id *)a1;
- (BOOL)_bootstrapWithError:(out id *)a0;
- (void)_lock_configureMonitor;
- (void)_lock_updateVisibility;
- (id)initWithPID:(int)a0 bundlePath:(id)a1 visibility:(long long)a2 workspaceLocked:(BOOL)a3 queue:(id)a4;
- (BOOL)bootstrapWithSpecification:(id)a0 error:(out id *)a1;

@end
