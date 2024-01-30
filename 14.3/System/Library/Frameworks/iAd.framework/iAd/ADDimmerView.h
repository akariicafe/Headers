@class ADTapGestureRecognizer;
@protocol ADDimmerViewDelegate;

@interface ADDimmerView : UIView

@property (retain, nonatomic) ADTapGestureRecognizer *gestureRecognizer;
@property (nonatomic) BOOL dimmed;
@property (readonly, nonatomic) BOOL enabled;
@property (weak, nonatomic) id<ADDimmerViewDelegate> delegate;

- (void).cxx_destruct;
- (void)addADTapGestureRecognizer;
- (void)removeADTapGestureRecognizer;
- (void)_tapRecognized:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
