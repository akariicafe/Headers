@class NSArray, NSString;

@interface WFVariableString : NSObject <WFVariableSerialization, NSCopying>

@property (readonly, nonatomic) NSArray *stringsAndVariables;
@property (readonly, nonatomic) NSArray *variables;
@property (readonly, nonatomic) NSString *stringByRemovingVariables;
@property (readonly, nonatomic) NSString *stringByReplacingVariablesWithNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)dictionaryIsSerializedVariableString:(id)a0;

- (id)serializedRepresentation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithVariable:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)initWithStringsAndVariables:(id)a0;
- (id)initWithAttachmentCharacterString:(id)a0 variableGetter:(id /* block */)a1;
- (void)processWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)processIntoContentItemsWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)processIntoStringsAndAttachmentsWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)variablesOfType:(id)a0;
- (BOOL)representsSingleContentVariable;
- (void)addVariableDelegate:(id)a0;
- (void)removeVariableDelegate:(id)a0;

@end
