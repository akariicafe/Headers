@class _DPPrivacyBudget, NSArray;

@interface _DPNamespaceParameters : NSObject

@property (readonly, nonatomic) _DPPrivacyBudget *budget;
@property (retain, nonatomic) NSArray *allowedDataTypes;

+ (id)parametersFromFile:(id)a0;
+ (id)allNamespaceNames;
+ (id)initParametersForNamespace:(id)a0;
+ (id)namespaceParametersFromDictionary:(id)a0;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
