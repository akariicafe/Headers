@class UILabel, NSString;
@protocol TUICandidateViewStyle;

@interface TUICandidateInlineTextView : UIView

@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) id<TUICandidateViewStyle> style;

- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithCoder:(id)a0;
- (void)updateLabels;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
