@class EDString, NSString, EDFormula, OITSUPointerKeyDictionary;

@interface EDName : NSObject {
    NSString *_formulaString;
    OITSUPointerKeyDictionary *_maxWorksheetReferences;
}

@property (retain, nonatomic) EDString *nameString;
@property (readonly, nonatomic) BOOL isInternalFunction;
@property (readonly, nonatomic) NSString *internalFunctionName;
@property (readonly, nonatomic) EDFormula *formula;
@property (nonatomic) unsigned long long sheetIndex;
@property (readonly, nonatomic) OITSUPointerKeyDictionary *maxWorksheetReferences;

+ (id)name;

- (BOOL)isEqualToString:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToEDName:(id)a0;
- (void)setFormula:(id)a0 workbook:(id)a1;
- (id)formulaString;
- (void)setFormulaString:(id)a0 workbook:(id)a1;

@end
