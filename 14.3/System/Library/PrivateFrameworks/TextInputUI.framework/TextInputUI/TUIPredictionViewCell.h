@class UIMorphingLabel, UIView, UIImage, UIScrollView, NSString, UIImageView, TIKeyboardCandidate, UIKBRenderConfig, UILabel, UIColor;

@interface TUIPredictionViewCell : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIColor *backgroundViewHighlightColor;
@property (retain, nonatomic) UIView *leftSeparatorView;
@property (retain, nonatomic) UIView *rightSeparatorView;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic, getter=isLabelTruncated) BOOL labelTruncated;
@property (retain, nonatomic) UILabel *normalLabel;
@property (retain, nonatomic) UIMorphingLabel *morphingLabel;
@property (retain, nonatomic) UIView *secureCandidateLabel;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) double highlightMargin;
@property (nonatomic) unsigned long long visibleSeparatorEdges;
@property (nonatomic) double separatorMargin;
@property (retain, nonatomic) TIKeyboardCandidate *candidate;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) long long layoutType;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (retain, nonatomic) UIScrollView *maskingScrollView;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *imageTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellHighlightColorForDarkStyle:(BOOL)a0;

- (BOOL)_isEmojiCandidate:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)_usesMorphingLabelForCandidate:(id)a0;
- (void)_updateColorsForRenderConfig:(id)a0 highlighted:(BOOL)a1;
- (struct CGSize { double x0; double x1; })labelTextSizeForCandidate:(id)a0;
- (void)layoutSubviews;
- (id)labelViewForCandidate:(id)a0;
- (id)displayTextAttributesForMultiline:(BOOL)a0;
- (id)centerTruncatedStringForString:(id)a0 withAttributes:(id)a1 fittingWidth:(double)a2;
- (BOOL)_renderConfigUsesDarkStyle:(id)a0;
- (id)attributedStringRepresentationOfCandidate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isSecureCandidate:(id)a0;
- (BOOL)candidateRequiresTruncationForBoundingWidth:(double)a0;
- (id)headerTextAttributes;
- (id)_displayLabelForCandidate:(id)a0;
- (id)currentTextSuggestion;
- (BOOL)_isPad;
- (void)setImage:(id)a0;
- (id)image;
- (BOOL)useAutofillStyle;
- (void)setCandidate:(id)a0 animated:(BOOL)a1;

@end
