@class TSTCell, TSTCellFormulaSpec, NSString;

@interface TSTMutableCellIteratorData : NSObject <TSTCellIteratorData>

@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } cellID;
@property (retain, nonatomic) TSTCell *cell;
@property (retain, nonatomic) TSTCellFormulaSpec *formulaSpec;
@property (nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } origin; struct { unsigned int numberOfColumns; unsigned int numberOfRows; } size; } mergeRange;
@property (readonly, nonatomic) unsigned char cellValueType;
@property (readonly, nonatomic) BOOL cellHasFormula;
@property (readonly, nonatomic) BOOL cellHasConditionalStyle;
@property (readonly, nonatomic) BOOL cellHasCustomFormat;
@property (readonly, nonatomic) BOOL cellHasCommentStorage;
@property (readonly, nonatomic) BOOL cellIsEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)reset;

@end
