@class NSString, NSUUID, NSDictionary, AFServiceDeviceContext;

@interface _AFServiceDeviceContextMutation : NSObject <AFServiceDeviceContextMutating> {
    AFServiceDeviceContext *_base;
    NSUUID *_identifier;
    NSString *_assistantIdentifier;
    NSString *_mediaSystemIdentifier;
    NSString *_mediaRouteIdentifier;
    NSString *_sharedUserID;
    NSString *_roomName;
    long long _proximity;
    NSDictionary *_serializedContextByKey;
    NSDictionary *_metricsContext;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIdentifier : 1; unsigned char hasAssistantIdentifier : 1; unsigned char hasMediaSystemIdentifier : 1; unsigned char hasMediaRouteIdentifier : 1; unsigned char hasSharedUserID : 1; unsigned char hasRoomName : 1; unsigned char hasProximity : 1; unsigned char hasSerializedContextByKey : 1; unsigned char hasMetricsContext : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (void)setMediaSystemIdentifier:(id)a0;
- (void)setAssistantIdentifier:(id)a0;
- (id)initWithBase:(id)a0;
- (void)setProximity:(long long)a0;
- (void)setMediaRouteIdentifier:(id)a0;
- (id)getIdentifier;
- (id)getRoomName;
- (void)setIdentifier:(id)a0;
- (id)getMediaRouteIdentifier;
- (void)setRoomName:(id)a0;
- (id)getAssistantIdentifier;
- (void).cxx_destruct;
- (id)getMediaSystemIdentifier;
- (void)setSharedUserID:(id)a0;
- (id)getSharedUserID;
- (id)getMetricsContext;
- (long long)getProximity;
- (id)getSerializedContextByKey;
- (void)setMetricsContext:(id)a0;
- (void)setSerializedContextByKey:(id)a0;

@end
