@class NSString, NSDictionary, AFCommandExecutionInfo, AFPeerInfo;

@interface _AFCommandExecutionInfoMutation : NSObject <AFCommandExecutionInfoMutating> {
    AFCommandExecutionInfo *_baseModel;
    NSString *_executionID;
    NSString *_requestID;
    AFPeerInfo *_originPeerInfo;
    NSDictionary *_userInfo;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasExecutionID : 1; unsigned char hasRequestID : 1; unsigned char hasOriginPeerInfo : 1; unsigned char hasUserInfo : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setUserInfo:(id)a0;
- (id)generate;
- (void)setRequestID:(id)a0;
- (void)setExecutionID:(id)a0;
- (void)setOriginPeerInfo:(id)a0;
- (id)initWithBaseModel:(id)a0;

@end
