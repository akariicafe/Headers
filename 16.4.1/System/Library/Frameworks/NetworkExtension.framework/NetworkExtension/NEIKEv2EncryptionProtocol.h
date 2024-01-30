@interface NEIKEv2EncryptionProtocol : NSObject <NSCopying> {
    BOOL _is256Bit;
    unsigned long long _wireType;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithEncryptionType:(unsigned long long)a0;

@end
