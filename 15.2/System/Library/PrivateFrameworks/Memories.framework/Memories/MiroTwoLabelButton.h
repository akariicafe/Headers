@class NSString, NSParagraphStyle, UIFont;

@interface MiroTwoLabelButton : UIButton

@property (nonatomic) BOOL titleIsDirty;
@property (retain, nonatomic) NSParagraphStyle *defaultParagraphStyle;
@property (retain, nonatomic) NSString *primaryLabelText;
@property (retain, nonatomic) NSString *secondaryLabelText;
@property (retain, nonatomic) UIFont *primaryLabelFont;
@property (retain, nonatomic) UIFont *secondaryLabelFont;

- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)awakeFromNib;
- (void)setAttributedTitle:(id)a0 forState:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)cancelTrackingWithEvent:(id)a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (id)primaryLabelFont;
- (void)_updateAttributedTitle;
- (void)_syncButtonState;
- (void)setPrimaryLabelFont:(id)a0;

@end
