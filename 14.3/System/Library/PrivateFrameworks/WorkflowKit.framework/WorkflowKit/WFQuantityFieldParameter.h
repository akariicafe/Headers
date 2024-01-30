@class NSArray;

@interface WFQuantityFieldParameter : WFNumberFieldParameter

@property (copy, nonatomic) NSArray *possibleUnits;

+ (BOOL)defaultAllowsNegativeNumbers;
+ (BOOL)defaultAllowsDecimalNumbers;

- (void).cxx_destruct;
- (id)defaultUnit;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 completionHandler:(id /* block */)a2;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleUnit:(id)a0 magnitude:(id)a1 style:(unsigned long long)a2;

@end
