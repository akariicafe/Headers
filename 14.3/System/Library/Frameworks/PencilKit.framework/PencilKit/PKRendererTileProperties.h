@interface PKRendererTileProperties : NSObject <NSCopying>

@property (readonly, nonatomic) long long level;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } offset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithLevel:(long long)a0 offset:(struct CGPoint { double x0; double x1; })a1;

@end
