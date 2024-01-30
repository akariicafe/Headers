@class NSString;

@interface WFNumberFieldParameter : WFParameter <WFParameterDialogProvider>

@property (readonly, nonatomic) long long textAlignment;
@property (readonly, nonatomic) BOOL allowsDecimalNumbers;
@property (readonly, nonatomic) BOOL allowsNegativeNumbers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)defaultAllowsNegativeNumbers;
+ (BOOL)defaultAllowsDecimalNumbers;

- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (id)defaultSupportedVariableTypes;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 prompt:(id)a2 completionHandler:(id /* block */)a3;
- (id)parameterStateFromDialogResponse:(id)a0;
- (BOOL)shouldAlignLabels;

@end
