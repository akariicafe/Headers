@class _UIVectorTextLayoutParameters;

@interface _UIVectorTextLayoutInfo : NSObject

@property (retain, nonatomic) _UIVectorTextLayoutParameters *parameters;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } coordinateAdjustment;
@property (nonatomic) struct __CTFrame { } *frame;

- (double)scale;
- (void).cxx_destruct;
- (void)dealloc;

@end
