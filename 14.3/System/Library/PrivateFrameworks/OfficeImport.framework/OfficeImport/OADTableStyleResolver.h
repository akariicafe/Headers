@class OADTableStyle, OADTableProperties, OADTable;

@interface OADTableStyleResolver : NSObject {
    OADTable *mTable;
    OADTableProperties *mTableProperties;
    OADTableStyle *mTableStyle;
    int mColumnCount;
    int mRowCount;
    struct OADTFTemplateMatrix<OADTableCell *> { int x0; int x1; struct vector<OADTableCell *, std::__1::allocator<OADTableCell *> > { id *x0; id *x1; struct __compressed_pair<OADTableCell *__strong *, std::__1::allocator<OADTableCell *> > { id *x0; } x2; } x2; } *mCellMatrix;
    struct OADTFTemplateMatrix<OADTablePartStyle *> { int x0; int x1; struct vector<OADTablePartStyle *, std::__1::allocator<OADTablePartStyle *> > { id *x0; id *x1; struct __compressed_pair<OADTablePartStyle *__strong *, std::__1::allocator<OADTablePartStyle *> > { id *x0; } x2; } x2; } *mCellStyles;
    struct OADTFTemplateMatrix<OADStroke *> *mStrokes[2];
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)flatten;
- (id)initWithTable:(id)a0;
- (void)loadCells;
- (void)applyCellStyleFromPart:(int)a0 dir1:(int)a1 fromI1:(int)a2 fromI2:(int)a3 dir1Span:(int)a4 dir2Span:(int)a5;
- (int)cellCountAlongDir:(int)a0;
- (void)applyCellStyleOfBandsNormalToDir:(int)a0 parity:(int)a1 part:(int)a2;
- (void)applyCellStyleOfExtremeVectorNormalToDir:(int)a0 atExtremePos:(int)a1 part:(int)a2;
- (void)applyCornerCellStyleWithRowPos:(int)a0 columnPos:(int)a1 part:(int)a2;
- (void)applyWholeTableCellStyle;
- (void)applyBandCellStyles;
- (void)applyExtremeVectorCellStyles;
- (void)applyCornerCellStyles;
- (void)setStroke:(id)a0 ofSegmentNormalToDir1:(int)a1 i1:(int)a2 fromI2:(int)a3;
- (void)applyStroke:(int)a0 fromPart:(int)a1 normalToDir1:(int)a2 i1:(int)a3 fromI2:(int)a4 dir2Span:(int)a5;
- (void)applyStroke:(int)a0 fromPart:(int)a1 normalToDir1:(int)a2 i1:(int)a3 fromI2:(int)a4 toI2:(int)a5;
- (void)applyStrokesFromPart:(int)a0 fromPos:(struct OADTMatrixPos { int x0; int x1; })a1 toPos:(struct OADTMatrixPos { int x0; int x1; })a2;
- (id)sourceCellAtI1:(int)a0 i2:(int)a1 dir1:(int)a2;
- (int)cellParityRelativeToDir1:(int)a0 i1:(int)a1 i2:(int)a2;
- (void)applyStrokesOfBandsNormalToDir:(int)a0 parity:(int)a1 part:(int)a2;
- (void)applyStrokeOfExtremeVectorNormalToDir:(int)a0 atExtremePos:(int)a1;
- (void)applyCornerStrokesWithRowPos:(int)a0 columnPos:(int)a1 part:(int)a2;
- (void)createStrokeMatrices;
- (void)applyWholeTableStrokes;
- (void)applyBandStrokes;
- (void)applyExtremeVectorStrokes;
- (void)applyCornerStrokes;
- (void)applyTextStyle:(id)a0 toParagraph:(id)a1;
- (struct OADTMatrixPos { int x0; int x1; })dominantCellInRowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 columnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)strokeOfSegmentNormalToDir1:(int)a0 i1:(int)a1 fromI2:(int)a2;
- (void)applyResolvedPartStyle:(id)a0 leftStroke:(id)a1 rightStroke:(id)a2 topStroke:(id)a3 bottomStroke:(id)a4 toCell:(id)a5;
- (void)fixVectorAtExtremePositionFlags;
- (void)applyCellStyles;
- (void)applyStyleStrokes;
- (void)applyResolvedStyling;
- (void)applyTextStyle:(id)a0 toCell:(id)a1;

@end
