@interface BoundingBoxWithLabel : NSObject

@property unsigned long long minX;
@property unsigned long long minY;
@property unsigned long long maxX;
@property unsigned long long maxY;
@property float depth;
@property unsigned short alias;
@property (readonly) unsigned short label;

- (id)initWithLabel:(unsigned short)a0;
- (unsigned long long)computeArea;

@end
