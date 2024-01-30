@class NSData;

@interface HAPFragmentationPacket : HMFObject

@property (readonly, nonatomic) unsigned short transactionIdentifier;
@property (readonly, nonatomic) unsigned int length;
@property (readonly, nonatomic) unsigned int offset;
@property (readonly, copy, nonatomic) NSData *data;

- (id)serialize;
- (id)init;
- (void).cxx_destruct;
- (id)shortDescription;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithFragmentedPacketData:(id)a0;
- (id)initWithData:(id)a0 transactionIdentifier:(unsigned short)a1 length:(unsigned int)a2 offset:(unsigned int)a3;

@end
