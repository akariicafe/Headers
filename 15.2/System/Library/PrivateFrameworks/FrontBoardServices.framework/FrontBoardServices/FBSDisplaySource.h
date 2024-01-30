@class CADisplay, NSString, FBSDisplayMonitor, FBSDisplayConfiguration, NSObject, BSAtomicSignal;
@protocol OS_dispatch_queue;

@interface FBSDisplaySource : NSObject <BSInvalidatable, BSDescriptionProviding> {
    CADisplay *_display;
    BOOL _isMain;
    unsigned int _instanceID;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    BOOL _observing;
    BOOL _initialized;
    BSAtomicSignal *_invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    FBSDisplayMonitor *_lock_monitor;
    FBSDisplayConfiguration *_lock_configuration;
    BOOL _lock_allowsUnknown;
    int _lock_attachment;
    unsigned int _lock_debounceToken;
    FBSDisplayConfiguration *_lock_reportedConfiguration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _externallyVisibleLock;
    int _evlock_attachment;
    FBSDisplayConfiguration *_evlock_configuration;
    FBSDisplayConfiguration *_evlock_reportedConfiguration;
}

@property (readonly, nonatomic) unsigned int displayID;
@property (nonatomic) BOOL allowsUnknown;
@property (readonly, copy, nonatomic) FBSDisplayConfiguration *connectedConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_lock_setConfiguration:(id)a0;
- (void)_lock_noteUpdated;
- (id)initWithMainDisplay:(id)a0 monitor:(id)a1;
- (id)succinctDescription;
- (void)_lock_update;
- (void)_lock_noteConnected;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_initWithDisplay:(id)a0 monitor:(id)a1 isMain:(BOOL)a2;
- (void)_lock_noteDisconnecting;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNonMainDisplay:(id)a0 monitor:(id)a1;
- (void)dealloc;
- (id)_lock_setReportedConfiguration:(id)a0;
- (void)_lock_setAttachment:(int)a0;

@end
