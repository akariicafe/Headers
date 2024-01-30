@interface NEIKEv2PRFProtocol : NSObject <NSCopying>

@property (readonly) unsigned int length;
@property unsigned long long type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithType:(unsigned long long)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
