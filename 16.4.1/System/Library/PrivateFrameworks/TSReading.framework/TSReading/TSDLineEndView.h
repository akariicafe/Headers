@class TSDLineEnd;

@interface TSDLineEndView : UIView

@property (retain, nonatomic) TSDLineEnd *lineEnd;
@property (nonatomic) BOOL onRight;

+ (id)viewWithLineEnd:(id)a0 onRight:(BOOL)a1;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
