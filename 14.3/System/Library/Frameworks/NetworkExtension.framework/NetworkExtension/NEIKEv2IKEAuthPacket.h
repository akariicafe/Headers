@class NEIKEv2EAPPayload, NEIKEv2ResponderIdentifierPayload, NEIKEv2InitiatorIdentifierPayload, NSArray, NEIKEv2AuthPayload, NEIKEv2InitiatorTrafficSelectorPayload, NEIKEv2ResponderTrafficSelectorPayload, NEIKEv2ChildSAPayload, NEIKEv2ConfigPayload;

@interface NEIKEv2IKEAuthPacket : NEIKEv2Packet

@property (retain) NEIKEv2ChildSAPayload *sa;
@property (retain) NEIKEv2InitiatorIdentifierPayload *idi;
@property (retain) NEIKEv2ResponderIdentifierPayload *idr;
@property (retain) NSArray *certificates;
@property (retain) NSArray *certificateRequests;
@property (retain) NEIKEv2AuthPayload *auth;
@property (retain) NEIKEv2EAPPayload *eap;
@property (retain) NEIKEv2ConfigPayload *config;
@property (retain) NEIKEv2InitiatorTrafficSelectorPayload *tsi;
@property (retain) NEIKEv2ResponderTrafficSelectorPayload *tsr;
@property (retain) NSArray *vendorIDs;

+ (id)copyTypeDescription;
+ (id)createEAPForInitiatorIKESA:(id)a0 childSA:(id)a1 lastResponderPacket:(id)a2;
+ (id)createIKEAuthForInitiatorIKESA:(id)a0 childSA:(id)a1;
+ (id)createIKEAuthResponse:(id)a0 refusalError:(unsigned long long)a1;
+ (id)createIKEAuthResponse:(id)a0 ikeSA:(id)a1 childSA:(id)a2;
+ (unsigned long long)exchangeType;

- (void).cxx_destruct;
- (id)validateEAPOnlyAuthentication:(id)a0;
- (BOOL)validateAuthAsInitiator:(id)a0 childSA:(id)a1;
- (id)validateAuthPart1AsResponderCopyErrorForIKESA:(id)a0;
- (id)validateAuthPart2AsResponderCopyErrorForIKESA:(id)a0 childSA:(id)a1;
- (BOOL)validateFirstAuthPayloadsForInitiator:(id)a0 childSA:(id)a1;
- (void)gatherPayloads;
- (void)filloutPayloads;

@end
