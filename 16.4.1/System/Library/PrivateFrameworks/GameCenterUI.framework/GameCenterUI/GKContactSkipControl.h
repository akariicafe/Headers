@class NSString, NSArray, NSMutableDictionary, UIView;

@interface GKContactSkipControl : UIControl

@property (retain, nonatomic) NSString *lastSelectedValue;
@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) UIView *buttonView;
@property (retain, nonatomic) UIView *centeringView;
@property (retain, nonatomic) NSMutableDictionary *buttonsToTitles;
@property (retain, nonatomic) NSArray *values;

- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (long long)valueButtonCountThatFitsHeight:(double)a0;
- (void)setupButtonView;
- (void)adjustForTraitCollection:(id)a0;
- (id)compactPhoneValues:(long long)a0;
- (void)determineButtonFromGesture:(id)a0;
- (id)nextTitleFollowingValue:(id)a0;
- (void)setupValueButtons;
- (void)valueSelected:(id)a0;

@end
