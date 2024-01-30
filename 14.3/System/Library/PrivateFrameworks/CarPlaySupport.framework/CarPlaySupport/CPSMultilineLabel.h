@class UIFont, NSString, NSArray, UIView, NSAttributedString, CPSMultilineLabelConfig, UILayoutGuide, NSLayoutConstraint, UIColor;
@protocol CPSMultilineLabelDelegate;

@interface CPSMultilineLabel : UIView

@property (nonatomic) BOOL debug;
@property (nonatomic) NSArray *baselineOffsets;
@property (retain, nonatomic) UIView *baselineView;
@property (retain, nonatomic) NSLayoutConstraint *baselineViewTopAnchor;
@property (retain, nonatomic) NSLayoutConstraint *baselineViewBottomAnchor;
@property (nonatomic) NSArray *leadingOffsets;
@property (retain, nonatomic) NSLayoutConstraint *textLayoutGuideLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textLayoutGuideTrailingConstraint;
@property (readonly, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) unsigned long long effectiveNumberOfLines;
@property (retain, nonatomic) UIView *debugFirstBaselineView;
@property (retain, nonatomic) UIView *debugLastBaselineView;
@property (weak, nonatomic) id<CPSMultilineLabelDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double lineSpacing;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) double minimumFontSize;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) long long textAlignment;
@property (nonatomic) BOOL prefersFewerLines;
@property (readonly, nonatomic) UILayoutGuide *textLayoutGuide;
@property (readonly, nonatomic) CPSMultilineLabelConfig *currentConfiguration;

- (void)_updateLayout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)firstBaselineAnchor;
- (id)lastBaselineAnchor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLayoutGuideConstraints;
- (struct __CTFrame { } *)_textFrame:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateBaselines;
- (id)_attributedTextForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_heightForAttributedString:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_attributedStringWithSize:(double)a0;
- (struct { unsigned long long x0; unsigned long long x1; })_statsForString:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)_fitsInHeight:(double)a0 numberOfLines:(unsigned long long)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)_ellipsedString:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfTrailingWhiteSpace:(id)a0;

@end
