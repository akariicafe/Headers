@class PDSProtoBatchRegisterResp, PDSProtoBatchRegisterReq;

@interface PDSRegisterMessage : FTIDSMessage

@property (retain, nonatomic) PDSProtoBatchRegisterReq *protoRequest;
@property (retain, nonatomic) PDSProtoBatchRegisterResp *protoResponse;
@property (nonatomic) unsigned long long regReason;

- (id)messageBodyDataOverride;
- (BOOL)requiresPushTokenKeys;
- (BOOL)wantsUDID;
- (id)bagKey;
- (id)additionalMessageHeaders;
- (double)anisetteHeadersTimeout;
- (id)overrideContentType;
- (BOOL)hasRequiredKeys:(id *)a0;
- (void).cxx_destruct;
- (void)handleResponseBody:(id)a0;
- (BOOL)wantsClientInfo;
- (BOOL)wantsIDSProtocolVersion;
- (id)parsedIDSMessageResult;

@end
