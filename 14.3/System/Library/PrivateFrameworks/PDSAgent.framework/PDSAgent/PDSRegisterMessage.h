@class PDSProtoBatchRegisterResp, PDSProtoBatchRegisterReq;

@interface PDSRegisterMessage : FTIDSMessage

@property (retain, nonatomic) PDSProtoBatchRegisterReq *protoRequest;
@property (retain, nonatomic) PDSProtoBatchRegisterResp *protoResponse;
@property (nonatomic) unsigned long long regReason;

- (id)bagKey;
- (void).cxx_destruct;
- (BOOL)requiresPushTokenKeys;
- (BOOL)wantsIDSProtocolVersion;
- (double)anisetteHeadersTimeout;
- (id)messageBodyDataOverride;
- (id)overrideContentType;
- (id)parsedIDSMessageResult;
- (BOOL)wantsClientInfo;
- (BOOL)hasRequiredKeys:(id *)a0;
- (id)additionalMessageHeaders;
- (void)handleResponseBody:(id)a0;
- (BOOL)wantsUDID;

@end
