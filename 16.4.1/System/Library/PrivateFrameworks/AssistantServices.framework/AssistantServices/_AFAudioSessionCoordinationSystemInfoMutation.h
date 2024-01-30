@class NSString, AFAudioSessionCoordinationSystemInfo, NSUUID;

@interface _AFAudioSessionCoordinationSystemInfoMutation : NSObject <AFAudioSessionCoordinationSystemInfoMutating> {
    AFAudioSessionCoordinationSystemInfo *_base;
    BOOL _isSupportedAndEnabled;
    NSString *_homeKitRoomName;
    NSUUID *_homeKitMediaSystemIdentifier;
    NSString *_mediaRemoteGroupIdentifier;
    NSString *_mediaRemoteRouteIdentifier;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIsSupportedAndEnabled : 1; unsigned char hasHomeKitRoomName : 1; unsigned char hasHomeKitMediaSystemIdentifier : 1; unsigned char hasMediaRemoteGroupIdentifier : 1; unsigned char hasMediaRemoteRouteIdentifier : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (void)setMediaRemoteRouteIdentifier:(id)a0;
- (id)getMediaRemoteGroupIdentifier;
- (id)initWithBase:(id)a0;
- (id)getMediaRemoteRouteIdentifier;
- (BOOL)getIsSupportedAndEnabled;
- (void)setMediaRemoteGroupIdentifier:(id)a0;
- (id)getHomeKitRoomName;
- (void)setIsSupportedAndEnabled:(BOOL)a0;
- (id)getHomeKitMediaSystemIdentifier;
- (void)setHomeKitMediaSystemIdentifier:(id)a0;
- (void)setHomeKitRoomName:(id)a0;
- (void).cxx_destruct;

@end
