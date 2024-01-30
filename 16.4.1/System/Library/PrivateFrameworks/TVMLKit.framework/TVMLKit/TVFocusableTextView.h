@class _UIFloatingContentView, NSAttributedString, UITapGestureRecognizer, NSString, UITextView, UIVisualEffectView, UILabel, UIColor;

@interface TVFocusableTextView : UIView <_UIFloatingContentViewDelegate, UIGestureRecognizerDelegate> {
    UIColor *_backgroundColor;
    UIVisualEffectView *_vibrantEffectView;
    UITextView *_auxilliaryTextView;
}

@property (retain, nonatomic) UITextView *descriptionTextView;
@property (retain, nonatomic) _UIFloatingContentView *floatingView;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UITapGestureRecognizer *selectRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *playRecognizer;
@property (retain, nonatomic) UILabel *moreLabel;
@property (readonly, nonatomic) UITapGestureRecognizer *moreLabelTapGestureRecognizer;
@property (nonatomic) BOOL needsTextSizeComputation;
@property (retain, nonatomic) NSAttributedString *descriptionText;
@property (retain, nonatomic) UIColor *descriptionTextColor;
@property (retain, nonatomic) UIColor *descriptionTextHighlightColor;
@property (nonatomic) long long descriptionTextAlignment;
@property (retain, nonatomic) UIColor *highlightBackgroundColor;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (readonly, nonatomic, getter=isTextTruncating) BOOL textTruncating;
@property (nonatomic) double moreHighlightPadding;
@property (nonatomic) double moreHorizontalMargin;
@property (nonatomic) BOOL moreLabelOnNewLine;
@property (retain, nonatomic) UIColor *moreLabelTextColor;
@property (nonatomic) BOOL trackHorizontal;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) BOOL alwaysShowBackground;
@property (nonatomic) unsigned long long focusSizeIncrease;
@property (nonatomic, getter=isAlwaysFocusable) BOOL alwaysFocusable;
@property (nonatomic) BOOL disableFocus;
@property (copy, nonatomic) id /* block */ selectionHandler;
@property (copy, nonatomic) id /* block */ playHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cornerRadius;

- (void)_updateBackgroundColors;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)floatingContentView:(id)a0 isTransitioningFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)canBecomeFocused;
- (void)tintColorDidChange;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_moreLabelFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_moreLabelExclusionPathFrame;
- (void)_recomputeTextSizeIfNeeded;
- (void)_selectButtonAction:(id)a0;
- (void)_setNeedsTextSizeComputation;
- (void)_updateTextColorsIfNeeded;
- (void)_updateTextColorsForFocusState:(BOOL)a0;
- (void)_playButtonAction:(id)a0;

@end
