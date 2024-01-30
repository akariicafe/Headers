@class NSArray, NTKFaceColorScheme, CLKDevice;

@interface NTKActivityDialView : UIView

@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) NSArray *segments;
@property (retain, nonatomic) NTKFaceColorScheme *colorScheme;
@property (nonatomic) BOOL shouldRasterize;
@property (nonatomic) double zoomFraction;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1;
- (double)_handAlphaForEditMode:(long long)a0;
- (void)applyTransitionFromScheme:(id)a0 toScheme:(id)a1 fraction:(double)a2;
- (double)_segmentAlphaForEditMode:(long long)a0;

@end
