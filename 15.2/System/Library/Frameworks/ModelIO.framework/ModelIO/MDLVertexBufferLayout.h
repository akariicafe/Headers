@interface MDLVertexBufferLayout : NSObject <NSCopying>

@property (nonatomic) unsigned long long stride;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithStride:(unsigned long long)a0;

@end
