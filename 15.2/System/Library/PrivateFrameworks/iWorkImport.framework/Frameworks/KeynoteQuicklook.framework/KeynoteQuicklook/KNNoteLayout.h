@class TSWPLayout, TSWPPadding, NSString, NSMutableArray;

@interface KNNoteLayout : TSDLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPStyleProviding, TSWPStyleProvider> {
    TSWPPadding *_padding;
    NSMutableArray *_invertedParagraphsStyles;
}

@property (nonatomic) struct CGSize { double width; double height; } sizeOfScrollViewEnclosingCanvas;
@property (readonly, nonatomic) TSWPLayout *containedLayout;
@property (readonly, nonatomic) TSWPPadding *padding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) double textScaleFactor;
@property (readonly, nonatomic) BOOL supportsBoldItalicUnderlineShortcuts;

- (void)setChildren:(id)a0;
- (id)children;
- (void)addChild:(id)a0;
- (id)styleProvider;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)darkModeEnabled;
- (void)insertChild:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)autosizeFlagsForTextLayout:(id)a0;
- (int)verticalAlignmentForTextLayout:(id)a0;
- (void)invalidateForAutosizingTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nonAutosizedFrameForTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autosizedFrameForTextLayout:(id)a0 textSize:(struct CGSize { double x0; double x1; })a1;
- (id)dependentsOfTextLayout:(id)a0;
- (Class)repClassForTextLayout:(id)a0;
- (unsigned long long)initialCharIndex;
- (double)widthForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (double)gapForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (id)computeLayoutGeometry;
- (void)invalidateSize;
- (id)paragraphStyleAtParIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)characterStyleAtCharIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)updateChildrenFromInfo;
- (id)columnMetricsForCharIndex:(unsigned long long)a0 outRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)textIsVertical;
- (struct CGPoint { double x0; double x1; })capturedInfoPositionForAttachment;
- (id)layoutGeometryFromInfo;
- (void)replaceChild:(id)a0 with:(id)a1;
- (void)insertChild:(id)a0 below:(id)a1;
- (void)insertChild:(id)a0 above:(id)a1;
- (void)createContainedLayoutForEditing;
- (id)listStyleAtParIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)dropCapStyleAtParIndex:(unsigned long long)a0;
- (BOOL)p_isForPrint;
- (id)p_adjustedPaddingForBodyWidth:(double)a0;
- (BOOL)descendersCannotClip;
- (double)maxAutoGrowBlockHeightForTextLayout:(id)a0;
- (double)positionForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1 target:(id)a2 outWidth:(double *)a3 outGap:(double *)a4;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })adjustedInsetsForTarget:(id)a0;
- (id)styleProviderForTextLayout:(id)a0;
- (BOOL)wantsToProvideStylesForTextLayout:(id)a0;
- (id)textPropertiesForEquation:(id)a0 basedOnProperties:(id)a1;
- (void)invalidatePadding;
- (double)textScaleFactorForPrinting;

@end
