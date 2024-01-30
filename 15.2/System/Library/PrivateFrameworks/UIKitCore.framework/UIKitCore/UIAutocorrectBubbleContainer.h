@class NSString, UIAutocorrectBubble, UIView, NSLayoutConstraint;

@interface UIAutocorrectBubbleContainer : UIView

@property (retain, nonatomic) NSString *typedText;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceRect;
@property (retain, nonatomic) UIAutocorrectBubble *bubble;
@property (retain, nonatomic) UIView *fakeTextSelectionHighlight;
@property (retain, nonatomic) UIView *typedTextAnimationPlaceholder;
@property (retain, nonatomic) NSLayoutConstraint *highlightWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bubbleTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *xConstraint;
@property (retain, nonatomic) NSLayoutConstraint *yConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;

- (void)updateWithAutocorrectionText:(id)a0 typedText:(id)a1 referenceTextView:(id)a2 referenceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)updateFakeTextSelectionHighlightForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateSelfWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateBubbleWithAutocorrectionText:(id)a0 referenceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)didTapAutocorrectionBubble;
- (BOOL)isViewAnimating;
- (void)dismissAutocorrectBubble;
- (void)performReset;
- (id)createTypedTextViewWithTypedText:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)animateAutocorrectionAccepted;
- (void)reset;

@end
