@class HCXPCMessage, NSString, NSDictionary, AXDispatchTimer, NSObject;
@protocol OS_os_transaction;

@interface AXHAController : NSObject <HUNearbyControllerDelegate, AXHALiveListenDelegate> {
    BOOL _isListening;
    AXDispatchTimer *_liveListenLevelsTimer;
}

@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) NSString *pairedDeviceUUID;
@property (retain, nonatomic) NSDictionary *availableDevicesDescription;
@property (retain, nonatomic) HCXPCMessage *liveListenMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)init;
- (void)willSwitchUser;
- (void)dealloc;
- (id)connectToControllerWithID:(id)a0;
- (void)setPairedHearingAid:(id)a0;
- (BOOL)hearingAidsPaired;
- (void)setListenForAvailableDeviceUpdates:(BOOL)a0;
- (id)currentDeviceController;
- (id)liveListenController;
- (void)availableRemoteControllersDidChange;
- (void)readLiveListenLevels;
- (void)updateNearbyDeviceAvailability;
- (void)sendUpdatesForProperties:(id)a0 excludingClient:(id)a1;
- (void)connectToPairedDevice;
- (void)transitionToPeer;
- (id)disconnectAndForceClient:(id)a0;
- (void)liveListenControllerStateDidChange;
- (id)registerForAvailableDevicesUpdates:(id)a0;
- (id)registerForDeviceUpdates:(id)a0;
- (id)readDeviceProperty:(id)a0;
- (id)writeDeviceProperty:(id)a0;
- (id)registerForControlMessageUpdates:(id)a0;
- (id)readAvailableDevices:(id)a0;
- (id)readAvailableControllers:(id)a0;
- (id)disconnectAndForceSlave:(id)a0;
- (id)toggleLiveListen:(id)a0;
- (id)registerForLiveListenUpdates:(id)a0;

@end
