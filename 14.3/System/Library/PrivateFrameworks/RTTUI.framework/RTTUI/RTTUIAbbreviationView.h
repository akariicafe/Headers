@class NSString, NSDictionary, UILabel, UIView;

@interface RTTUIAbbreviationView : UIControl

@property (retain, nonatomic) UILabel *abbreviation;
@property (retain, nonatomic) UILabel *hint;
@property (retain, nonatomic) UIView *leftBorderView;
@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) NSDictionary *abbreviationData;
@property (readonly, nonatomic) NSString *abbreviationText;
@property (nonatomic) BOOL drawLeftBorder;

+ (void)warningSquelcher;

- (BOOL)canBecomeFocused;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityIdentifier;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
