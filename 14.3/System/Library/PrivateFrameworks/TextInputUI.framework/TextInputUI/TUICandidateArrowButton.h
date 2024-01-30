@class TUICandidateBackdropView, NSString, UIView;
@protocol TUICandidateViewStyle;

@interface TUICandidateArrowButton : UIButton

@property (retain, nonatomic) UIView *highlightBackgroundView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) TUICandidateBackdropView *backdropView;
@property (nonatomic) BOOL showsBackground;
@property (copy, nonatomic) NSString *arrowImageName;
@property (nonatomic) long long arrowDirection;
@property (retain, nonatomic) id<TUICandidateViewStyle> style;
@property (readonly, nonatomic) UIView *contentView;

- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)updateStyle;
- (double)imageViewAlpha;
- (void)udpateBackgroundColor;
- (id)rotatedImageForImage:(id)a0 scale:(double)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;

@end
