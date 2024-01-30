@class NSString, AFAudioSessionCoordinationSystemInfo, AFAudioSessionCoordinationDeviceInfo, AFPeerInfo;

@interface _AFAudioSessionCoordinationDeviceInfoMutation : NSObject <AFAudioSessionCoordinationDeviceInfoMutating> {
    AFAudioSessionCoordinationDeviceInfo *_baseModel;
    AFPeerInfo *_peerInfo;
    AFAudioSessionCoordinationSystemInfo *_systemInfo;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasPeerInfo : 1; unsigned char hasSystemInfo : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)generate;
- (void)setPeerInfo:(id)a0;
- (void)setSystemInfo:(id)a0;
- (id)initWithBaseModel:(id)a0;

@end
