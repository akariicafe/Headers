@class NSString, AFAudioDeviceInfo, NSUUID;

@interface _AFAudioDeviceInfoMutation : NSObject <AFAudioDeviceInfoMutating> {
    AFAudioDeviceInfo *_baseModel;
    NSString *_route;
    BOOL _isRemoteDevice;
    NSUUID *_deviceUID;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasRoute : 1; unsigned char hasIsRemoteDevice : 1; unsigned char hasDeviceUID : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)generate;
- (void)setRoute:(id)a0;
- (void)setIsRemoteDevice:(BOOL)a0;
- (id)initWithBaseModel:(id)a0;
- (void)setDeviceUID:(id)a0;

@end
