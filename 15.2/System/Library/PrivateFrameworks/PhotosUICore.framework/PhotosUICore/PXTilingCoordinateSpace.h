@interface PXTilingCoordinateSpace : NSObject

@property (readonly, nonatomic) void *identifier;
@property (weak, nonatomic) PXTilingCoordinateSpace *parentSpace;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;

- (void).cxx_destruct;
- (id)init;

@end
