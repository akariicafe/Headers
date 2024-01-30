@class NSTimer, NSString, NSArray, MRExternalDevice, MRAVOutputDevice, NSOperationQueue, NSDictionary, _MRAVEndpointDescriptorProtobuf, NSMutableArray, NSHashTable, MROrigin;

@interface MRAVEndpoint : NSObject {
    NSMutableArray *_pendingConnectionHandlers;
    NSOperationQueue *_connectionHandlerOperationQueue;
    BOOL _registeredForConnectionStateDidChangeNotifications;
    NSTimer *_connectionTimeoutTimer;
    BOOL _outputDevicesDidChangeNotificationScheduled;
    NSHashTable *_weakObservers;
}

@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) MRExternalDevice *externalDevice;
@property (readonly, nonatomic) _MRAVEndpointDescriptorProtobuf *descriptor;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) NSArray *personalOutputDevices;
@property (readonly, nonatomic) NSArray *outputDeviceUIDs;
@property (readonly, nonatomic) unsigned long long logicalOutputDeviceCount;
@property (readonly, nonatomic) MRAVOutputDevice *designatedGroupLeader;
@property (readonly, nonatomic) MRAVOutputDevice *groupLeader;
@property (readonly, nonatomic) long long connectionType;
@property (readonly, nonatomic) NSString *debugName;
@property (readonly, nonatomic, getter=isProxyGroupPlayer) BOOL proxyGroupPlayer;
@property (readonly, nonatomic) BOOL canModifyGroupMembership;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) NSDictionary *jsonEncodableDictionaryRepresentation;
@property (readonly, nonatomic, getter=isLocalEndpoint) BOOL localEndpoint;
@property (readonly, nonatomic, getter=isCompanionEndpoint) BOOL companionEndpoint;
@property (readonly, nonatomic) MROrigin *origin;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;

+ (void)hostedEndpointForOutputDeviceUIDs:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
+ (id)_notificationSerialQueue;
+ (void)directEndpointForOutputDeviceUIDs:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
+ (void)createEndpointWithOutputDeviceUIDs:(id)a0 queue:(id)a1 completion:(id /* block */)a2;

- (void)setOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withReplyQueue:(id)a3 completion:(id /* block */)a4;
- (void)setListeningMode:(id)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)migrateToOutputDevice:(id)a0 request:(id)a1 initiator:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (id)_initiatorStringWithInitiator:(id)a0 uid:(id)a1;
- (id)translateClusterUIDIfNeeded:(id)a0;
- (void)_prepareToMigrateToEndpoint:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)migrateToEndpoint:(id)a0 request:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)migrateToOrAddOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (void)_externalDeviceConnectionStateDidChangeNotification:(id)a0;
- (void)removeOutputDeviceFromParentGroup:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)performMigrationToEndpoint:(id)a0 request:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)outputDeviceVolume:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withReplyQueue:(id)a3 completion:(id /* block */)a4;
- (id)discoverySessionWithConfiguration:(id)a0;
- (void)setAllowsHeadTrackedSpatialAudio:(BOOL)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (BOOL)isEqualToEndpoint:(id)a0;
- (void)_willStartingPlaybackToOutputDeviceInterruptPlayback:(id)a0 duration:(double)a1 requestID:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (void)scheduleEndpointOutputDevicesDidChangeNotification;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_callAllCompletionHandlersWithError:(id)a0;
- (void)migrateToOrSetOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (void)connectToExternalDeviceWithUserInfo:(id)a0 completion:(id /* block */)a1;
- (id)outputDevicesMatchingPredicate:(id /* block */)a0;
- (BOOL)effectivelyEqual:(id)a0;
- (void)migrateToOutputDevices:(id)a0 request:(id)a1 initiator:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)setHeadTrackedSpatialAudioMode:(id)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (id)description;
- (void)volumeControlCapabilitiesForOutputDevice:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)setOutputDeviceVolume:(float)a0 outputDevice:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)connectToExternalDeviceWithOptions:(unsigned int)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (id)outputDeviceUIDsMatchingPredicate:(id /* block */)a0;
- (void)performMigrationToOutputDevices:(id)a0 request:(id)a1 initiator:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (BOOL)containsOutputDeviceWithUID:(id)a0;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (void)_requestSharedAudioPresentationOutputContextModificationWithAddingDevices:(id)a0 removingDevices:(id)a1 settingDevices:(id)a2 replyQueue:(id)a3 completion:(id /* block */)a4;
- (id)outputDeviceWithUID:(id)a0;
- (void)willStartingPlaybackToOutputDeviceInterruptPlayback:(id)a0 duration:(double)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)canMigrateToEndpoint:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withReplyQueue:(id)a3 completion:(id /* block */)a4;
- (BOOL)isVolumeControlAvailable;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_init;
- (void)dealloc;

@end
