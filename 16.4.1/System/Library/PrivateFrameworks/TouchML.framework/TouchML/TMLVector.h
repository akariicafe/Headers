@interface TMLVector : NSObject <TMLVectorJSExports, NSCopying>

@property (readonly, nonatomic) struct CGVector { double dx; double dy; } vector;
@property (readonly, nonatomic) double dx;
@property (readonly, nonatomic) double dy;

+ (void)initializeJSContext:(id)a0;

- (id)initWithVector:(struct CGVector { double x0; double x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CGVectorValue;

@end
