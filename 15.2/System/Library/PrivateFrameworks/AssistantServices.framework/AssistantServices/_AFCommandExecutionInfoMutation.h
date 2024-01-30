@class NSUUID, NSString, AFSpeechInfo, AFHomeInfo, AFInstanceInfo, NSArray, AFEndpointInfo, AFCommandExecutionInfo, AFPeerInfo, AFRequestHandlingContext, NSDictionary;

@interface _AFCommandExecutionInfoMutation : NSObject <AFCommandExecutionInfoMutating> {
    AFCommandExecutionInfo *_baseModel;
    NSString *_executionID;
    NSString *_requestID;
    NSUUID *_turnId;
    AFPeerInfo *_originPeerInfo;
    AFHomeInfo *_currentHomeInfo;
    AFEndpointInfo *_endpointInfo;
    AFInstanceInfo *_instanceInfo;
    AFSpeechInfo *_speechInfo;
    AFRequestHandlingContext *_requestHandlingContextSnapshot;
    NSArray *_deviceRestrictions;
    NSDictionary *_userInfo;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasExecutionID : 1; unsigned char hasRequestID : 1; unsigned char hasTurnId : 1; unsigned char hasOriginPeerInfo : 1; unsigned char hasCurrentHomeInfo : 1; unsigned char hasEndpointInfo : 1; unsigned char hasInstanceInfo : 1; unsigned char hasSpeechInfo : 1; unsigned char hasRequestHandlingContextSnapshot : 1; unsigned char hasDeviceRestrictions : 1; unsigned char hasUserInfo : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setExecutionID:(id)a0;
- (void)setTurnId:(id)a0;
- (void)setOriginPeerInfo:(id)a0;
- (void)setCurrentHomeInfo:(id)a0;
- (void)setInstanceInfo:(id)a0;
- (void)setSpeechInfo:(id)a0;
- (void)setRequestHandlingContextSnapshot:(id)a0;
- (void)setDeviceRestrictions:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setRequestID:(id)a0;
- (void)setEndpointInfo:(id)a0;
- (void)setUserInfo:(id)a0;

@end
