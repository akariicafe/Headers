@class NEIKEv2ResponderTrafficSelectorPayload, NEIKEv2NoncePayload, NSArray, NEIKEv2InitiatorTrafficSelectorPayload, NEIKEv2IKESAPayload, NEIKEv2KeyExchangePayload, NEIKEv2ChildSAPayload, NEIKEv2ConfigPayload;

@interface NEIKEv2CreateChildPacket : NEIKEv2Packet

@property (readonly) BOOL isRekeyIKE;
@property (readonly) BOOL isRekeyChild;
@property (retain) NEIKEv2IKESAPayload *ikeSA;
@property (retain) NEIKEv2ChildSAPayload *childSA;
@property (retain) NEIKEv2KeyExchangePayload *ke;
@property (retain) NEIKEv2NoncePayload *nonce;
@property (retain) NEIKEv2ConfigPayload *config;
@property (retain) NEIKEv2InitiatorTrafficSelectorPayload *tsi;
@property (retain) NEIKEv2ResponderTrafficSelectorPayload *tsr;
@property (retain) NSArray *vendorIDs;

+ (id)copyTypeDescription;
+ (id)createRekeyResponse:(id)a0 ikeSA:(id)a1;
+ (id)createChildSAForInitiatorChildSA:(id)a0;
+ (id)createChildSAResponse:(id)a0 childSA:(id)a1;
+ (id)createRekeyChildSAForInitiator:(id)a0;
+ (id)createRekeyResponse:(id)a0 childSA:(id)a1;
+ (id)createRekeyIKESAForInitiator:(id)a0;
+ (id)createChildSAResponse:(id)a0 errorCode:(unsigned long long)a1 errorData:(id)a2;
+ (unsigned long long)exchangeType;

- (void).cxx_destruct;
- (BOOL)validateCreateChildAsInitiator:(id)a0;
- (BOOL)validateCreateChildAsResponder:(id)a0;
- (BOOL)validateRekeyChildSA:(id)a0;
- (BOOL)validateResponderRekeyChildSA:(id)a0 sendInvalidKE:(BOOL *)a1;
- (BOOL)validateRekeyIKESA:(id)a0;
- (BOOL)validateResponderRekeyIKESA:(id)a0 sendInvalidKE:(BOOL *)a1;
- (void)gatherPayloads;
- (void)filloutPayloads;

@end
