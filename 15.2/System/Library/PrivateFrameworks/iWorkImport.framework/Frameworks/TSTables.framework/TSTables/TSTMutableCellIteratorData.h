@class TSTCell, TSTCellFormulaSpec, NSString;

@interface TSTMutableCellIteratorData : NSObject <TSTCellIteratorData>

@property (nonatomic) BOOL cellIDIsValid;
@property (nonatomic) BOOL cellIsValid;
@property (nonatomic) BOOL formulaSpecIsValid;
@property (nonatomic) BOOL mergeRangeIsValid;
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

- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
