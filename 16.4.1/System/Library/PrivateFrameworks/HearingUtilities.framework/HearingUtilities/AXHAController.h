@class HCXPCMessage, NSString, NSDictionary, AXDispatchTimer, NSObject;
@protocol OS_os_transaction;

@interface AXHAController : NSObject <HUNearbyHearingAidControllerDelegate, AXHALiveListenDelegate> {
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

- (void)willSwitchUser;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)availableRemoteControllersDidChange;
- (id)connectToControllerWithID:(id)a0;
- (void)connectToPairedDevice;
- (id)currentDeviceController;
- (id)disconnectAndForceClient:(id)a0;
- (BOOL)hearingAidsPaired;
- (id)liveListenController;
- (void)liveListenControllerStateDidChange;
- (id)readAvailableControllers:(id)a0;
- (id)readAvailableDevices:(id)a0;
- (id)readDeviceProperty:(id)a0;
- (void)readLiveListenLevels;
- (id)registerForAvailableDevicesUpdates:(id)a0;
- (id)registerForControlMessageUpdates:(id)a0;
- (id)registerForDeviceUpdates:(id)a0;
- (id)registerForLiveListenUpdates:(id)a0;
- (void)sendUpdatesForProperties:(id)a0 excludingClient:(id)a1;
- (void)setListenForAvailableDeviceUpdates:(BOOL)a0;
- (void)setPairedHearingAid:(id)a0;
- (id)toggleLiveListen:(id)a0;
- (void)transitionToPeer;
- (void)updateNearbyDeviceAvailability;
- (id)writeDeviceProperty:(id)a0;

@end
