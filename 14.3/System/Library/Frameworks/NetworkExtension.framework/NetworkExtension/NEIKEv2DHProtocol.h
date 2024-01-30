@interface NEIKEv2DHProtocol : NSObject <NSCopying>

@property unsigned long long group;

- (id)initWithGroup:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
