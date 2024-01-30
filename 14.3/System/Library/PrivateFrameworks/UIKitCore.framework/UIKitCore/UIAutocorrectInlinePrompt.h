@class NSString, NSMutableArray, UIView;

@interface UIAutocorrectInlinePrompt : UIView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_originalTypedTextRect;
    NSString *m_typedText;
    NSString *m_correction;
    NSMutableArray *m_typedTextViews;
    UIView *m_correctionView;
    UIView *m_correctionAnimationView;
    UIView *m_typedTextAnimationView;
    UIView *m_correctionShadowView;
    BOOL m_fits;
    BOOL m_mouseDown;
    double m_originalTypedTextRectCorrectionAmount;
}

@property (nonatomic) unsigned int usageTrackingMask;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 forEvent:(struct __GSEvent { } *)a1;
- (int)textEffectsVisibilityLevel;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (id)typedText;
- (id)typedTextView;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)removePromptSubviews;
- (id)typedTextAnimationView;
- (id)correctionShadowView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })horizontallySquishedCorrectionFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shadowFrameForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })correctionFrameFromDesiredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textHeight:(int)a1 withExtraGap:(double)a2;
- (BOOL)isAcceptableTextEffectsFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 afterScrollBy:(double)a1;
- (void)addTypedTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)textEffectsVisibilityLevelInKeyboardWindow;
- (id)correctionView;
- (void)setCorrection:(id)a0 typedText:(id)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 maxX:(double)a3;
- (id)correctionAnimationView;
- (BOOL)prepareForAnimation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)correction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dismiss;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
