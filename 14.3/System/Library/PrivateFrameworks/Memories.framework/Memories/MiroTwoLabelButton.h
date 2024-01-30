@class NSString, NSParagraphStyle, UIFont;

@interface MiroTwoLabelButton : UIButton

@property (nonatomic) BOOL titleIsDirty;
@property (retain, nonatomic) NSParagraphStyle *defaultParagraphStyle;
@property (retain, nonatomic) NSString *primaryLabelText;
@property (retain, nonatomic) NSString *secondaryLabelText;
@property (retain, nonatomic) UIFont *primaryLabelFont;
@property (retain, nonatomic) UIFont *secondaryLabelFont;

- (void)cancelTrackingWithEvent:(id)a0;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_commonInit;
- (void)setAttributedTitle:(id)a0 forState:(unsigned long long)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)initWithCoder:(id)a0;
- (id)primaryLabelFont;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_syncButtonState;
- (void)_updateAttributedTitle;
- (void)setPrimaryLabelFont:(id)a0;

@end
