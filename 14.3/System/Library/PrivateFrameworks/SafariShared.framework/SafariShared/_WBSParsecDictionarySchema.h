@class NSDictionary;

@interface _WBSParsecDictionarySchema : WBSParsecSchema

@property (copy, nonatomic) NSDictionary *keysToSchemata;

- (void).cxx_destruct;
- (id)initWithSchemaDictionary:(id)a0 associatedError:(id)a1 isOptional:(BOOL)a2;
- (BOOL)_validateChild:(id)a0 ofParent:(id)a1 withParentAssociatedError:(id)a2 errorHandler:(id /* block */)a3;

@end
