@class ECMappingContext, NSString, EDWorksheet, EDWorkbook;

@interface EDFormulaHelper : NSObject <EFHelper> {
    EDWorkbook *mWorkbook;
    EDWorksheet *mWorksheet;
    int mRowNumber;
    int mColumnNumber;
    ECMappingContext *mMappingContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)columnNumber;
- (void).cxx_destruct;
- (int)rowNumber;
- (unsigned long long)resolveName:(id)a0;
- (BOOL)isCurrentSheet:(id)a0;
- (unsigned long long)createIndexWithType:(int)a0 firstSheetIndex:(unsigned long long)a1 lastSheetIndex:(unsigned long long)a2;
- (id)initWithWorkbook:(id)a0 worksheet:(id)a1 rowNumber:(int)a2 columnNumber:(int)a3;
- (unsigned long long)resolveFile:(id)a0;
- (unsigned long long)resolveFirstSheet:(id)a0 lastSheet:(id)a1;
- (int)resolveFunctionName:(id)a0;
- (unsigned long long)resolveSheet:(id)a0;
- (id)resolveTable:(id)a0;
- (unsigned long long)resolveTableColumn:(id)a0 columnName:(id)a1;
- (unsigned long long)resolveTableToSheetId:(id)a0;
- (id)workbook;

@end
