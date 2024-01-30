@class NSString, PSPointerSystemClientController, BKSMousePointerService, PSPointerClientController, NSHashTable, NSMapTable;
@protocol BSInvalidatable;

@interface SBMousePointerManager : NSObject <BKSMousePointerDeviceObserver, PSPointerSystemClientControllerDelegate> {
    PSPointerClientController *_pointerClientController;
    BKSMousePointerService *_mousePointerService;
    unsigned long long _connectedPointingDevicesCount;
    PSPointerSystemClientController *_systemClientController;
    NSHashTable *_observers;
    id<BSInvalidatable> _mousePointerDeviceObserverToken;
    id<BSInvalidatable> _serviceKeepAliveAssertion;
    NSMapTable *_springBoardScenesToPointerAssertions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (id)setSystemPointerInteractionContextID:(unsigned int)a0 displayWithHardwareIdentifier:(id)a1;
- (void)_notifyObserversPointingDeviceBecameAvailable:(BOOL)a0;
- (BOOL)isHardwarePointingDeviceAttached;
- (void)pointerClientController:(id)a0 sceneDidActivate:(id)a1;
- (void)mousePointerDevicesDidChange:(id)a0;
- (void)dealloc;
- (void)pointerClientController:(id)a0 sceneWillDeactivate:(id)a1;
- (void)removeObserver:(id)a0;
- (void)_setPointerUIDWithConnectedDeviceCount:(unsigned long long)a0;
- (void)_updatePointerAssertionsAndScenes;
- (void)_handleAssistiveTouchEnabledDidChangeNotification;
- (id)init;
- (void)pointerClientController:(id)a0 willRemoveScene:(id)a1;
- (void).cxx_destruct;
- (id)requestPointerActivationForScene:(id)a0;
- (void)pointerClientController:(id)a0 didAddScene:(id)a1;

@end
