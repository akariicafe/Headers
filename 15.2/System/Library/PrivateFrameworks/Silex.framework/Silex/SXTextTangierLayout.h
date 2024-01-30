@class SXTextTangierTextWrapper, TSWPPadding;

@interface SXTextTangierLayout : TSDContainerLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPExteriorTextWrap>

@property (retain, nonatomic) SXTextTangierTextWrapper *textWrapper;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } adjustedInsets;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) double textScaleFactor;

- (void).cxx_destruct;
- (void)invalidate;
- (unsigned int)autosizeFlagsForTextLayout:(id)a0;
- (unsigned int)verticalAlignmentForTextLayout:(id)a0;
- (void)invalidateForAutosizingTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nonAutosizedFrameForTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autosizedFrameForTextLayout:(id)a0 textSize:(struct CGSize { double x0; double x1; })a1;
- (id)dependentsOfTextLayout:(id)a0;
- (Class)repClassForTextLayout:(id)a0;
- (struct CGSize { double x0; double x1; })initialTextSize;
- (BOOL)shouldHyphenateTextLayout:(id)a0;
- (double)widthForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (double)gapForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (double)positionForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1 outWidth:(double *)a2 outGap:(double *)a3;
- (id)textWrapperForExteriorWrap;
- (id)additionalReliedOnLayoutsForTextWrap;

@end
