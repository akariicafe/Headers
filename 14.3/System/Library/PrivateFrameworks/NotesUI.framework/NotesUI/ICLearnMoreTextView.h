@class UITapGestureRecognizer, UIViewController, NSString;

@interface ICLearnMoreTextView : UITextView

@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (nonatomic) BOOL isShowingLearnMore;
@property (retain, nonatomic) NSString *helpTopicID;
@property (retain, nonatomic) NSString *helpVersion;

- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)dealloc;
- (void)awakeFromNib;
- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (BOOL)_accessibilityHasTextOperations;
- (void)tapGesture:(id)a0;
- (void)updateForAccessibilityDarkerSystemColors;
- (id)attributedString:(id)a0 withColor:(id)a1 font:(id)a2;
- (void)setAttributedText:(id)a0 font:(id)a1 lineSpacing:(double)a2 addLearnMore:(BOOL)a3;
- (void)resetTextView;
- (void)didTapLearnMore;
- (void)setText:(id)a0 font:(id)a1 color:(id)a2 lineSpacing:(double)a3 addLearnMore:(BOOL)a4;
- (void)setAttributedText:(id)a0 addLearnMore:(BOOL)a1;
- (void)sizeToFitWidthUsingHeightConstraint:(id)a0;

@end
