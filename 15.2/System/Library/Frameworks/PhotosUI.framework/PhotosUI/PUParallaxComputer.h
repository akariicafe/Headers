@interface PUParallaxComputer : NSObject

@property (nonatomic) long long model;
@property (nonatomic) double parallaxFactor;
@property (nonatomic) unsigned long long axis;

- (struct CGPoint { double x0; double x1; })contentParallaxOffsetForViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
