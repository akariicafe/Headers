@interface MDLVertexBufferLayout : NSObject <NSCopying>

@property (nonatomic) unsigned long long stride;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithStride:(unsigned long long)a0;

@end
