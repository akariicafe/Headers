@class CADisplay, NSSet, NSString, FBSDisplayConfiguration, NSObject, FBSDisplayMonitor;
@protocol OS_dispatch_queue;

@interface FBSDisplaySource : NSObject <BSInvalidatable, BSDescriptionProviding> {
    CADisplay *_display;
    FBSDisplayMonitor *_lock_monitor;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    FBSDisplayConfiguration *_lock_rawConfiguration;
    NSSet *_lock_effectiveConfigurations;
    FBSDisplayConfiguration *_lock_reportedRawConfiguration;
    NSSet *_lock_reportedEffectiveConfigurations;
    FBSDisplayConfiguration *_evlock_rawConfiguration;
    NSSet *_evlock_effectiveConfigurations;
    FBSDisplayConfiguration *_evlock_reportedRawConfiguration;
    NSSet *_evlock_reportedEffectiveConfigurations;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _externallyVisibleLock;
    unsigned int _instanceID;
    int _lock_attachment;
    int _evlock_attachment;
    unsigned int _lock_debounceToken;
    BOOL _alwaysConnected;
    BOOL _updatable;
    BOOL _observing;
    BOOL _lock_initialized;
    BOOL _lock_allowsUnknown;
    BOOL _lock_invalidated;
}

@property (readonly, nonatomic) unsigned int displayID;
@property (nonatomic) BOOL allowsUnknown;
@property (readonly, copy, nonatomic) NSSet *connectedConfigurations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDisplay:(id)a0 alwaysConnected:(BOOL)a1 triggers:(unsigned long long)a2 monitor:(id)a3;
- (void)_lock_setAttachment:(int)a0;
- (void)_lock_setRawReportedConfiguration:(id)a0 effectiveReportedConfigurations:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_callOutQueue_postToObservers:(id)a0 includeBookendObserver:(BOOL)a1 updated:(id)a2;
- (id)succinctDescriptionBuilder;
- (void)_lock_noteDisconnecting;
- (void)_callOutQueue_postToObservers:(id)a0 includeBookendObserver:(BOOL)a1 connected:(id)a2;
- (void)_lock_noteConnected;
- (id)_lock_transformDisplaysIfNecessaryFromDisplayConfiguration:(id)a0;
- (void)_updateForInitialization:(BOOL)a0 forTransformInvalidation:(BOOL)a1;
- (void)updateTransforms;
- (void)_lock_setRawConfiguration:(id)a0 effectiveConfigurations:(id)a1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_callOutQueue_postToObservers:(id)a0 includeBookendObserver:(BOOL)a1 disconnected:(id)a2;
- (void)_lock_noteUpdatedForTransformInvalidation:(BOOL)a0;
- (void)_forceUpdateForMockCADisplayChange;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
