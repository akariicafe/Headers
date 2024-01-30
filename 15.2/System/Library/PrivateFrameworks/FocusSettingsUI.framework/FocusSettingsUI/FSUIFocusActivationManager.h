@class NSString, DNDModeSelectionService, DNDModeAssertion, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface FSUIFocusActivationManager : NSObject <DNDModeSelectionServiceListener> {
    DNDModeSelectionService *_modeSelectionService;
    DNDModeAssertion *_latestModeAssertion;
    NSMutableArray *_listeners;
    NSObject<OS_dispatch_queue> *_listenersQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)modeSelectionService:(id)a0 didReceiveUpdatedActiveModeAssertion:(id)a1 stateUpdate:(id)a2;
- (void)modeSelectionService:(id)a0 didReceiveModesUpdate:(id)a1;
- (void)modeSelectionService:(id)a0 didReceiveAvailableModesUpdate:(id)a1;
- (id)_modeSelectionService;
- (void)_notifyListenersOfActiveModeAssertionChange:(id)a0;
- (BOOL)isActiveMode:(id)a0;
- (void)setMode:(id)a0 isActive:(BOOL)a1;
- (void)addListenerForFocusActivationChanges:(id)a0;
- (void)removeListenerForFocusActivationChanges:(id)a0;

@end
