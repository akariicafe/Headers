@class NSString, MRExternalDevice, NSObject;
@protocol OS_dispatch_queue, MRLegacyControllerDelegate;

@interface MRLegacyController : NSObject <MRProtocolClientConnectionDelegate>

@property (copy, nonatomic) NSString *outputDeviceUID;
@property (retain, nonatomic) MRExternalDevice *externalDevice;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<MRLegacyControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connect;
- (void)tearDown;
- (void)setupExternalDevice;
- (id)initWithExternalDevice:(id)a0 outputDeviceUID:(id)a1;
- (void)modifyTopologyAddingDevices:(id)a0 removingDevices:(id)a1 settingDevices:(id)a2 completion:(id /* block */)a3;
- (id)initWithAVOutputDevice:(id)a0;
- (void)handleVolumeCapabilitiesDidChangeNotification:(id)a0;
- (void)addOutputDeviceIDs:(id)a0 completion:(id /* block */)a1;
- (void)removeOutputDeviceIDs:(id)a0 completion:(id /* block */)a1;
- (void)setOutputDeviceIDs:(id)a0 completion:(id /* block */)a1;
- (void)getMasterVolumeWithCompletion:(id /* block */)a0;
- (void)getOutputDeviceVolume:(id)a0 completion:(id /* block */)a1;
- (void)getMasterVolumeCapabilitiesWithCompletion:(id /* block */)a0;
- (void)getOutputDeviceVolumeCapabilities:(id)a0 completion:(id /* block */)a1;
- (void)setMasterVolume:(float)a0 completion:(id /* block */)a1;
- (void)setVolume:(float)a0 forOutputDeviceID:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithOutputDeviceUID:(id)a0;
- (id)initWithOutputDevice:(id)a0;
- (void)dealloc;

@end
