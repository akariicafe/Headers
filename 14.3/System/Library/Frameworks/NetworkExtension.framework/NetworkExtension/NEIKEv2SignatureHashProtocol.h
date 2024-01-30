@interface NEIKEv2SignatureHashProtocol : NSObject <NSCopying>

@property (nonatomic) unsigned long long hashType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHashType:(unsigned long long)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
