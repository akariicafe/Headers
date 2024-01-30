@class TSWPTOCLayoutHint;

@interface TSWPTOCLayout : TSWPShapeLayout {
    TSWPTOCLayoutHint *_hint;
    unsigned long long _initialCharIndex;
    unsigned long long _storageChangeCount;
    BOOL _textIsVertical;
}

@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (readonly, nonatomic) unsigned long long initialCharIndex;
@property (readonly, nonatomic) TSWPTOCLayoutHint *hint;
@property (readonly, nonatomic, getter=isLastLayoutInTOC) BOOL lastLayoutInTOC;

- (id)initWithInfo:(id)a0;
- (BOOL)isDraggable;
- (unsigned long long)columnCount;
- (id)layoutMargins;
- (void).cxx_destruct;
- (unsigned long long)autosizeFlagsForTextLayout:(id)a0;
- (int)verticalAlignmentForTextLayout:(id)a0;
- (void)invalidateForAutosizingTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nonAutosizedFrameForTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autosizedFrameForTextLayout:(id)a0 textSize:(struct CGSize { double x0; double x1; })a1;
- (Class)repClassForTextLayout:(id)a0;
- (BOOL)textLayoutShouldWrapAroundExternalDrawables:(id)a0;
- (BOOL)textLayoutShouldLayoutVertically:(id)a0;
- (double)widthForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (double)gapForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (BOOL)alwaysStartsNewTarget;
- (BOOL)shrinkTextToFit;
- (id)computeLayoutGeometry;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStandardKnobs;
- (BOOL)descendersCannotClip;
- (double)maxAutoGrowBlockHeightForTextLayout:(id)a0;
- (double)positionForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1 target:(id)a2 outWidth:(double *)a3 outGap:(double *)a4;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })adjustedInsetsForTarget:(id)a0;
- (id)initWithInfo:(id)a0 initialCharIndex:(unsigned long long)a1 textIsVertical:(BOOL)a2 maxSize:(struct CGSize { double x0; double x1; })a3;
- (id)commandToClampModelToLayoutSizeWithAdditionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
