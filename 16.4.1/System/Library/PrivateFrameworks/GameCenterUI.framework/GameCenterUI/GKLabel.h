@class NSString, GKTextStyle;

@interface GKLabel : UILabel <GKTextStyleReplay> {
    GKTextStyle *_baseStyle;
}

@property (retain, nonatomic) GKTextStyle *baseStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) GKTextStyle *appliedStyle;
@property (nonatomic) double actualFontShrinkageFactor;
@property (nonatomic) BOOL shouldEnforcePreferredWidth;
@property (readonly, nonatomic) BOOL usingAttributedText;
@property (nonatomic) BOOL shouldInhibitReplay;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInsets;

+ (void)initialize;

- (void)setText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setAttributedText:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)applyTextStyle:(id)a0;
- (void)replayAndApplyStyleUnlessInhibited;
- (void)replayAndApplyStyleWithSystemContentChange:(BOOL)a0;
- (struct CGSize { double x0; double x1; })shrinkFontToFitSize:(struct CGSize { double x0; double x1; })a0;
- (void)shrinkFontToFitWidth;

@end
