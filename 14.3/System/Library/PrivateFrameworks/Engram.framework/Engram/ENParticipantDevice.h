@class NSData;
@protocol ENCypher, ENDevicePublicKey;

@interface ENParticipantDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<ENCypher> cypher;
@property (readonly, nonatomic) id<ENDevicePublicKey> devicePublicKey;
@property (readonly, nonatomic) NSData *identifier;

- (void).cxx_destruct;
- (id)initWithDevicePublicKey:(id)a0 cypher:(id)a1 identifier:(id)a2;
- (id)verifyAndRevealData:(id)a0 withReceipient:(id)a1 cypherIdentifier:(id)a2 error:(id *)a3;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)signAndConcealData:(id)a0 withSender:(id)a1 cypherIdentifier:(id *)a2 error:(id *)a3;

@end
