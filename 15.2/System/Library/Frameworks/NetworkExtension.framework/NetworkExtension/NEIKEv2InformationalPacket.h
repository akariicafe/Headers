@class NSArray, NEIKEv2ConfigPayload;

@interface NEIKEv2InformationalPacket : NEIKEv2Packet

@property (readonly) BOOL isDeleteIKE;
@property (readonly) BOOL isDeleteChild;
@property (readonly) BOOL isMOBIKE;
@property (retain) NSArray *deletes;
@property (retain) NEIKEv2ConfigPayload *config;

+ (id)copyTypeDescription;
+ (id)createDeleteIKE;
+ (id)createInformationalResponse:(id)a0 ikeSA:(id)a1;
+ (id)createDeleteChild:(id)a0;
+ (id)createDeleteResponse:(id)a0 child:(id)a1;
+ (id)createInformationalPacketWithNATPayload:(id)a0;
+ (id)createInformational;
+ (id)createDeleteIKEResponse:(id)a0;
+ (id)createNotifyPacketForType:(unsigned long long)a0 data:(id)a1;
+ (id)createUpdateAddressInitiator:(id)a0;
+ (id)createMOBIKEPacketResponse:(id)a0 ikeSA:(id)a1;
+ (unsigned long long)exchangeType;

- (BOOL)validateInformational;
- (BOOL)validateDeleteChild:(id)a0;
- (void).cxx_destruct;
- (BOOL)validateDeleteIKE;
- (BOOL)validateUpdateAddresses:(id)a0;
- (BOOL)validateMOBIKE:(id)a0;
- (void)gatherPayloads;
- (void)filloutPayloads;

@end
