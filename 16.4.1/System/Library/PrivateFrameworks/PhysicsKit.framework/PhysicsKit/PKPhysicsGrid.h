@class PKQuadTree;

@interface PKPhysicsGrid : NSObject {
    struct shared_ptr<PKCGrid> { struct PKCGrid *__ptr_; struct __shared_weak_count *__cntrl_; } grid;
    PKQuadTree *quadTree;
}

@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (nonatomic) struct shared_ptr<PKCGrid> { struct PKCGrid *x0; struct __shared_weak_count *x1; } gridPtr;

+ (id)gridFromOccupancyArray:(const char *)a0 bytePitch:(int)a1 width:(int)a2 height:(int)a3;
+ (id)gridFromRGBAU8PixelData:(const char *)a0 imageWidth:(int)a1 imageHeight:(int)a2 alphaThreshold:(float)a3 accuracy:(float)a4;
+ (id)vectorGridFromRGBAU8PixelData:(const char *)a0 imageWidth:(int)a1 imageHeight:(int)a2 accuracy:(float)a3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned char)gridDataAtX:(int)a0 y:(int)a1 z:(int)a2;
- (BOOL)isGridRegionOccupied:(int)a0 y:(int)a1 width:(int)a2 height:(int)a3;
- (struct shared_ptr<PKPath> { struct PKPath *x0; struct __shared_weak_count *x1; })pathFromOutlineWithSmoothingThreshold:(double)a0 bounds:(struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; })a1;
- (id)physicsBodyFromLVS0:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)physicsBodyFromSmoothedOutline:(double)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
