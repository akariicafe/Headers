@class HAPBTLETransactionIdentifier, NSData;

@interface HAPBTLEControlPacket : HMFObject

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) HAPBTLETransactionIdentifier *transactionIdentifier;
@property (readonly, copy, nonatomic) NSData *payload;
@property (readonly, nonatomic, getter=isContinuationPacket) BOOL continuationPacket;

+ (id)shortDescription;
+ (id)packetWithSerializedData:(id)a0 error:(id *)a1;

- (id)descriptionWithPointer:(BOOL)a0;
- (id)shortDescription;
- (id)serialize;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)debugDescription;
- (id)initWithControlType:(unsigned char)a0 transactionIdentifier:(id)a1 continuationPacket:(BOOL)a2 packetPayload:(id)a3 maximumLength:(unsigned long long)a4;

@end
