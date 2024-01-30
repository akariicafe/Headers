@class NSString, BKSMousePointerService, PSPointerClientController;
@protocol BSInvalidatable;

@interface SBMousePointerManager : NSObject <BKSMousePointerDeviceObserver> {
    PSPointerClientController *_pointerClientController;
    BKSMousePointerService *_mousePointerService;
    id<BSInvalidatable> _mousePointerDeviceObserverToken;
    unsigned long long _connectedPointingDevicesCount;
    id<BSInvalidatable> _serviceKeepAliveAssertion;
}

@property (nonatomic) unsigned int systemCursorInteractionContextID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)mousePointerDevicesDidChange:(id)a0;
- (void)dealloc;
- (void)_setPointerUIDWithConnectedDeviceCount:(unsigned long long)a0;
- (void)_handleAssistiveTouchEnabledDidChangeNotification;
- (void)_updateKeepAliveAssertion;

@end
