@class VCPCtrTracker;

@interface VCPVideoObjectTracker : NSObject {
    VCPCtrTracker *_correlationTracker;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } objectBoundsInitial;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } objectBounds;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } start;
@property (readonly, nonatomic) int lostCount;

- (void).cxx_destruct;
- (id)initWithObjectBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inFrame:(struct __CVBuffer { } *)a1 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (int)trackObjectInFrame:(struct __CVBuffer { } *)a0;

@end
