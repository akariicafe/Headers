@class MKAnnotationView;

@interface _MKAnnotationViewAnchor : VKAnchorWrapper

@property (nonatomic) MKAnnotationView *annotationView;

- (struct { double x0; double x1; })coordinate;
- (struct CGPoint { double x0; double x1; })pointInLayer:(id)a0 bound:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)pointOffsetForDistanceOffset:(double)a0;

@end
