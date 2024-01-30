@class UIButton, NSString, UIImage;

@interface CAMMachineReadableCodeIndicatorView : CEKSubjectIndicatorView

@property (readonly, nonatomic) UIButton *_titleButton;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *titleImage;
@property (nonatomic) struct CGSize { double width; double height; } titleFittingSize;
@property (nonatomic) long long orientation;

+ (id)_stretchableCircleImageWithHeight:(double)a0;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)setTitle:(id)a0 image:(id)a1;
- (BOOL)_shouldShowButton;
- (void)_invalidateTitleButtonBackground;
- (void)_updateAttributedTitle;
- (void)setTitleTarget:(id)a0 action:(SEL)a1;
- (BOOL)shouldTitleReceiveTouch:(id)a0;

@end
