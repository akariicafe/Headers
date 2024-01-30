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

- (id)currentDeviceController;
- (void)setPairedHearingAid:(id)a0;
- (id)init;
- (id)readAvailableControllers:(id)a0;
- (void).cxx_destruct;
- (void)connectToPairedDevice;
- (id)connectToControllerWithID:(id)a0;
- (void)dealloc;
- (BOOL)hearingAidsPaired;
- (void)availableRemoteControllersDidChange;
- (void)updateNearbyDeviceAvailability;
- (void)sendUpdatesForProperties:(id)a0 excludingClient:(id)a1;
- (id)readAvailableDevices:(id)a0;
- (id)registerForDeviceUpdates:(id)a0;
- (void)transitionToPeer;
- (id)readDeviceProperty:(id)a0;
- (void)setListenForAvailableDeviceUpdates:(BOOL)a0;
- (id)registerForAvailableDevicesUpdates:(id)a0;
- (void)liveListenControllerStateDidChange;
- (void)readLiveListenLevels;
- (id)disconnectAndForceSlave:(id)a0;
- (id)registerForLiveListenUpdates:(id)a0;
- (id)writeDeviceProperty:(id)a0;
- (id)liveListenController;
- (void)willSwitchUser;
- (id)toggleLiveListen:(id)a0;

@end
