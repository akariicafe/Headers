@class UIStackView, VSFontCenter, UILabel, UIView;
@protocol VSTableHeaderFooterViewDelegate;

@interface VSTableHeaderFooterView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) VSFontCenter *fontCenter;
@property (nonatomic) long long kind;
@property (weak, nonatomic) id<VSTableHeaderFooterViewDelegate> delegate;
@property (retain, nonatomic) UIView *button;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)invalidateIntrinsicContentSize;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_didInvalidateIntrinsicContentSize;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
