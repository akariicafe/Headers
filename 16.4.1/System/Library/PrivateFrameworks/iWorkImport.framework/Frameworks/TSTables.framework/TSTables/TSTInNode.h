@interface TSTInNode : TSTExpressionNode

+ (id)inString;

- (id)string;
- (int)tokenType;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (struct TSCEFunctionArgSpec { } *)argumentSpec;
- (id)formulaPlainText;
- (void)insertFormulaText:(id)a0 includeWhitespace:(BOOL)a1;

@end
