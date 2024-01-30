@class NSString, NSArray, NSMutableDictionary, UIView;

@interface GKContactSkipControl : UIControl

@property (retain, nonatomic) NSString *lastSelectedValue;
@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) UIView *buttonView;
@property (retain, nonatomic) UIView *centeringView;
@property (retain, nonatomic) NSMutableDictionary *buttonsToTitles;
@property (retain, nonatomic) NSArray *values;

- (void).cxx_destruct;
- (void)setupButtonView;
- (void)setupValueButtons;
- (void)determineButtonFromGesture:(id)a0;
- (long long)valueButtonCountThatFitsHeight:(double)a0;
- (id)compactPhoneValues:(long long)a0;
- (id)nextTitleFollowingValue:(id)a0;
- (void)valueSelected:(id)a0;
- (void)adjustForTraitCollection:(id)a0;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
