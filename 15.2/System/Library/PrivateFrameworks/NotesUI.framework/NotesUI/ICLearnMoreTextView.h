@class UITapGestureRecognizer, NSString, UIViewController;

@interface ICLearnMoreTextView : UITextView

@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) BOOL isShowingLearnMore;
@property (copy, nonatomic) NSString *helpProductName;
@property (copy, nonatomic) NSString *helpTopicID;
@property (copy, nonatomic) NSString *helpVersion;
@property (weak, nonatomic) UIViewController *parentViewController;

- (void)tapGesture:(id)a0;
- (void)awakeFromNib;
- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityActivate;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)dealloc;
- (BOOL)_accessibilityHasTextOperations;
- (void)didTapLearnMore;
- (void)updateForAccessibilityDarkerSystemColors;
- (id)attributedString:(id)a0 withColor:(id)a1 font:(id)a2;
- (void)setAttributedText:(id)a0 font:(id)a1 lineSpacing:(double)a2 addLearnMore:(BOOL)a3;
- (void)resetTextView;
- (void)setText:(id)a0 font:(id)a1 color:(id)a2 lineSpacing:(double)a3 addLearnMore:(BOOL)a4;
- (void)setAttributedText:(id)a0 addLearnMore:(BOOL)a1;
- (void)sizeToFitWidthUsingHeightConstraint:(id)a0;

@end
