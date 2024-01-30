@class NEIKEv2IKESAPayload, NEIKEv2NoncePayload, NEIKEv2KeyExchangePayload, NSArray, NEIKEv2NotifyPayload;

@interface NEIKEv2IKESAInitPacket : NEIKEv2Packet

@property (retain) NEIKEv2NotifyPayload *cookie;
@property (retain) NEIKEv2IKESAPayload *sa;
@property (retain) NEIKEv2KeyExchangePayload *ke;
@property (retain) NEIKEv2NoncePayload *nonce;
@property (retain) NSArray *vendorIDs;

+ (id)copyTypeDescription;
+ (id)createIKESAInitForInitiatorIKESA:(id)a0;
+ (id)createIKESAInitResponse:(id)a0 errorCode:(unsigned long long)a1 errorData:(id)a2;
+ (id)createIKESAInitResponse:(id)a0 ikeSA:(id)a1;
+ (unsigned long long)exchangeType;
+ (BOOL)encryptPayloads;

- (void).cxx_destruct;
- (BOOL)validateSAInitAsInitiator:(id)a0;
- (BOOL)validateSAInitAsResponder:(id)a0 sendInvalidKE:(BOOL *)a1;
- (void)gatherPayloads;
- (void)filloutPayloads;

@end
