@class NSArray, NEIKEv2EncryptedPayload, NEIKEv2IKESPI;

@interface NEIKEv2Packet : NSObject <NEPrettyDescription>

@property BOOL decrypted;
@property BOOL isFragmented;
@property unsigned int fragmentNumber;
@property unsigned int totalFragments;
@property BOOL isInbound;
@property (retain) NSArray *packetDatagrams;
@property (retain) NSArray *rawPayloads;
@property (readonly) BOOL hasErrors;
@property int messageID;
@property (retain) NEIKEv2IKESPI *initiatorSPI;
@property (retain) NEIKEv2IKESPI *responderSPI;
@property (readonly) NEIKEv2IKESPI *senderSPI;
@property (readonly) NEIKEv2IKESPI *receiverSPI;
@property BOOL isResponse;
@property BOOL isInitiator;
@property (retain) NEIKEv2EncryptedPayload *encryptedPayload;
@property (retain) NSArray *customPayloads;
@property (retain) NSArray *notifications;

+ (id)copyTypeDescription;
+ (unsigned long long)exchangeType;
+ (BOOL)encryptPayloads;
+ (id)createPacketFromReceivedData:(id)a0 ikeSA:(id)a1;
+ (id)createPacketFromReceivedFragments:(id)a0 ikeSA:(id)a1;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initOutbound;
- (id)initResponse:(id)a0;
- (id)copyShortDescription;
- (BOOL)hasNotification:(unsigned long long)a0;
- (BOOL)addNotifyPayload:(id)a0;
- (BOOL)addNotification:(unsigned long long)a0 data:(id)a1;
- (id)description;
- (BOOL)addNotification:(unsigned long long)a0;
- (id)copyNotification:(unsigned long long)a0;
- (id)copyUnifiedData;
- (unsigned int)headerSizeForAddressFamily:(unsigned char)a0 fragment:(BOOL)a1 nonESPMarker:(BOOL)a2;
- (void)gatherPayloads;
- (unsigned int)encryptedFragmentSizeForIKESA:(id)a0;
- (id)copyAdditionalAuthenticationDataForNextPayloadType:(unsigned long long)a0 plainTextLen:(unsigned int)a1 fragmentNumber:(unsigned short)a2 totalFragments:(unsigned short)a3 encryption:(id)a4;
- (BOOL)shouldFragmentForEncryptedPayloadSize:(unsigned int)a0 addressFamily:(unsigned char)a1 nonESPMarker:(BOOL)a2;
- (id)createPacketDatagramWithPayloadData:(id)a0 nextPayloadType:(unsigned long long)a1 ikeSA:(id)a2 needsChecksum:(BOOL)a3;
- (void)filloutPayloads;
- (id)copyPacketDatagramsForIKESA:(id)a0;
- (id)copyReceivedPacketForIKESA:(id)a0;
- (void)addNotification:(unsigned long long)a0 fromArray:(id)a1 toPayloads:(id)a2;

@end
