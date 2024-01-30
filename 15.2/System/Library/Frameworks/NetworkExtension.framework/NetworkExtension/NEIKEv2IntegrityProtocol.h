@interface NEIKEv2IntegrityProtocol : NSObject <NSCopying>

@property (readonly) unsigned int keyLength;
@property (readonly) unsigned int digestLength;
@property unsigned long long type;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(unsigned long long)a0;
- (unsigned long long)hash;

@end
