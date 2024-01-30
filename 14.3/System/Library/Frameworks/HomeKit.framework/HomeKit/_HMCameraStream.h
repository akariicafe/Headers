@class NSUUID, NSString, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface _HMCameraStream : _HMCameraSource <HMFMessageReceiver>

@property (nonatomic) unsigned long long audioStreamSetting;
@property (retain, nonatomic) NSNumber *audioVolume;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateAudioVolume:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateAudioStreamSetting:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_issueUpdateAudioStreamSettingRequest:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_handleAudioStreamSettingUpdate:(unsigned long long)a0 completionHandler:(id /* block */)a1 error:(id)a2;
- (id)initWithSessionID:(id)a0 slotIdentifier:(id)a1 context:(id)a2 profileUniqueIdentifier:(id)a3 aspectRatio:(id)a4 audioStreamSetting:(unsigned long long)a5;
- (void)updateAudioVolume:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateAudioStreamSetting:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end
