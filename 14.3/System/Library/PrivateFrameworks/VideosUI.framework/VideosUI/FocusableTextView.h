@class UIColor, NSAttributedString, UITapGestureRecognizer, NSString, VUILabel, UITextView, VUITextLayout, UIVisualEffectView, UILabel, _UIFloatingContentView;

@interface FocusableTextView : UIView <_UIFloatingContentViewDelegate, UIGestureRecognizerDelegate, VUILabelBaselineProtocol> {
    UIColor *_backgroundColor;
    UIVisualEffectView *_vibrantEffectView;
    UITextView *_auxilliaryTextView;
}

@property (retain, nonatomic) UITextView *descriptionTextView;
@property (retain, nonatomic) _UIFloatingContentView *floatingView;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UITapGestureRecognizer *selectRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *playRecognizer;
@property (readonly, nonatomic) UITapGestureRecognizer *moreLabelTapGestureRecognizer;
@property (nonatomic) BOOL needsTextSizeComputation;
@property (retain, nonatomic) VUITextLayout *textLayout;
@property (retain, nonatomic) VUILabel *computationLabel;
@property (retain, nonatomic) UILabel *moreLabel;
@property (retain, nonatomic) NSAttributedString *descriptionText;
@property (retain, nonatomic) UIColor *descriptionTextColor;
@property (retain, nonatomic) UIColor *descriptionTextHighlightColor;
@property (nonatomic) long long descriptionTextAlignment;
@property (retain, nonatomic) UIColor *highlightBackgroundColor;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (readonly, nonatomic, getter=isTextTruncating) BOOL textTruncating;
@property (nonatomic) double moreHighlightPadding;
@property (nonatomic) BOOL moreLabelOnNewLine;
@property (retain, nonatomic) UIColor *moreLabelTextColor;
@property (nonatomic) BOOL trackHorizontal;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) BOOL alwaysShowBackground;
@property (nonatomic) double focusSizeIncrease;
@property (nonatomic, getter=isAlwaysFocusable) BOOL alwaysFocusable;
@property (nonatomic) BOOL disableFocus;
@property (copy, nonatomic) id /* block */ selectionHandler;
@property (copy, nonatomic) id /* block */ playHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cornerRadius;
+ (id)textViewWithAttributedString:(id)a0 textLayout:(id)a1 existingTextView:(id)a2;

- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)floatingContentView:(id)a0 isTransitioningFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)_updateTextColor;
- (void)tintColorDidChange;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (double)baselineOffsetFromBottom;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)topMarginWithBaselineMargin:(double)a0;
- (double)bottomMarginWithBaselineMargin:(double)a0;
- (double)topMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (void)_selectButtonAction:(id)a0;
- (void)_playButtonAction:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_moreLabelFrame;
- (void)_updateTextColorsForFocusState:(BOOL)a0;
- (void)_recomputeTextSizeIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_moreLabelExclusionPathFrame;
- (void)_updateTextColorsIfNeeded;
- (void)_updateBackgroundColors;
- (void)_setNeedsTextSizeComputation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForAttributedString:(id)a0 withWidth:(double)a1 lines:(unsigned long long)a2;

@end
