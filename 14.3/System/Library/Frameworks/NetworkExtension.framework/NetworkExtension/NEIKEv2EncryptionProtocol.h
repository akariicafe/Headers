@interface NEIKEv2EncryptionProtocol : NSObject <NSCopying>

@property (readonly) unsigned int keyLength;
@property (readonly) unsigned int blockLength;
@property (readonly) unsigned int ivLength;
@property (readonly) unsigned int icvLength;
@property unsigned long long wireType;
@property (readonly) BOOL isAuthenticated;
@property (readonly) BOOL isGCM;
@property BOOL is256Bit;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEncryptionWireType:(unsigned long long)a0 is256Bit:(BOOL)a1;
- (id)initWithEncryptionType:(unsigned long long)a0;
- (unsigned int)ccAlgorithm;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
