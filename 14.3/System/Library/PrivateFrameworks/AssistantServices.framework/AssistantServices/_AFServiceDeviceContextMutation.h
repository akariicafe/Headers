@class NSString, NSUUID, NSArray, NSDictionary, AFServiceDeviceContext;

@interface _AFServiceDeviceContextMutation : NSObject <AFServiceDeviceContextMutating> {
    AFServiceDeviceContext *_baseModel;
    NSUUID *_identifier;
    NSString *_mediaSystemIdentifier;
    NSString *_mediaRouteIdentifier;
    NSString *_roomName;
    long long _proximity;
    NSArray *_contextSnapshots;
    NSDictionary *_serializedContextByKey;
    NSDictionary *_metricsContext;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIdentifier : 1; unsigned char hasMediaSystemIdentifier : 1; unsigned char hasMediaRouteIdentifier : 1; unsigned char hasRoomName : 1; unsigned char hasProximity : 1; unsigned char hasContextSnapshots : 1; unsigned char hasSerializedContextByKey : 1; unsigned char hasMetricsContext : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMediaRouteIdentifier:(id)a0;
- (void)setProximity:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)generate;
- (void)setMediaSystemIdentifier:(id)a0;
- (void)setContextSnapshots:(id)a0;
- (void)setSerializedContextByKey:(id)a0;
- (void)setMetricsContext:(id)a0;
- (void)setRoomName:(id)a0;
- (void)setIdentifier:(id)a0;
- (id)initWithBaseModel:(id)a0;

@end
