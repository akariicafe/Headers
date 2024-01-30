@class UITapGestureRecognizer, NSString, UIViewController;

@interface ICLearnMoreTextView : UITextView

@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) BOOL isShowingLearnMore;
@property (copy, nonatomic) NSString *helpTopic;
@property (weak, nonatomic) UIViewController *parentViewController;

- (void)awakeFromNib;
- (void)dealloc;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;
- (id)accessibilityValue;
- (void)tapGesture:(id)a0;
- (BOOL)_accessibilityHasTextOperations;
- (void)didTapLearnMore;
- (void)setAttributedText:(id)a0 addLearnMore:(BOOL)a1;
- (id)attributedString:(id)a0 withColor:(id)a1 font:(id)a2;
- (void)resetTextView;
- (void)setAttributedText:(id)a0 font:(id)a1 lineSpacing:(double)a2 addLearnMore:(BOOL)a3;
- (void)setText:(id)a0 font:(id)a1 color:(id)a2 lineSpacing:(double)a3 addLearnMore:(BOOL)a4;
- (void)sizeToFitWidthUsingHeightConstraint:(id)a0;
- (void)updateForAccessibilityDarkerSystemColors;

@end
