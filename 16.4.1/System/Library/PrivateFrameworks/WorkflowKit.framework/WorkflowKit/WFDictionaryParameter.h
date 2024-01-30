@class NSString, NSSet;

@interface WFDictionaryParameter : WFParameter

@property (readonly, nonatomic) NSString *localizedItemTypeName;
@property (readonly, nonatomic) NSString *localizedNewItemTypeName;
@property (readonly, nonatomic) NSSet *allowedValueTypes;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (BOOL)allowsMultipleValues;
- (id)defaultSupportedVariableTypes;
- (Class)singleStateClass;

@end
