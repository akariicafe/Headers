@class NSArray, NUIContainerStackView;

@interface CNModernAtomIconView : UIView

@property (retain, nonatomic) NSArray *iconImages;
@property (retain, nonatomic) NUIContainerStackView *stackView;
@property (nonatomic) double iconPadding;
@property (nonatomic) struct CGPoint { double x; double y; } drawingOffset;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)preferredWidth;
- (void).cxx_destruct;

@end
