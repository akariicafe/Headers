@interface NEIKEv2SignatureHashProtocol : NSObject <NSCopying> {
    unsigned long long _hashType;
}

@property (readonly, nonatomic) unsigned long long hashType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)description;
- (id)initWithHashType:(unsigned long long)a0;

@end
