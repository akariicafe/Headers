@interface NEIKEv2PRFProtocol : NSObject <NSCopying>

@property (readonly) unsigned int length;
@property unsigned long long type;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(unsigned long long)a0;
- (unsigned long long)hash;

@end
