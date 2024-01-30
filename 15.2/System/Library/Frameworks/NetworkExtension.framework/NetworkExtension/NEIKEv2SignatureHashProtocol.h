@interface NEIKEv2SignatureHashProtocol : NSObject <NSCopying>

@property (nonatomic) unsigned long long hashType;

- (long long)compare:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithHashType:(unsigned long long)a0;

@end
