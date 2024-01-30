@class NSError;

@interface WBSParsecSchema : NSObject

@property (copy, nonatomic) id /* block */ validationBlock;
@property (copy, nonatomic) id /* block */ specializedSchemaBlock;
@property (nonatomic, getter=isOptional) BOOL optional;
@property (retain, nonatomic) Class expectedClass;
@property (retain, nonatomic) NSError *associatedError;

+ (id)schemaForArrayWithElementSchema:(id)a0;
+ (id)schemaForArrayWithElementSchema:(id)a0 associatedError:(id)a1;
+ (id)schemaForArrayWithElementSchema:(id)a0 associatedError:(id)a1 isOptional:(BOOL)a2;
+ (id)schemaForDictionaryWithStructure:(id)a0;
+ (id)schemaForDictionaryWithStructure:(id)a0 associatedError:(id)a1;
+ (id)schemaForDictionaryWithStructure:(id)a0 associatedError:(id)a1 isOptional:(BOOL)a2;
+ (id)schemaWithConstantValue:(id)a0;
+ (id)schemaWithExpectedClass:(Class)a0;
+ (id)schemaWithExpectedClass:(Class)a0 associatedError:(id)a1;
+ (id)schemaWithExpectedClass:(Class)a0 associatedError:(id)a1 isOptional:(BOOL)a2;

- (void).cxx_destruct;
- (BOOL)_validateChild:(id)a0 ofParent:(id)a1 withParentAssociatedError:(id)a2 errorHandler:(id /* block */)a3;
- (id)_initWithExpectedClass:(Class)a0 associatedError:(id)a1 isOptional:(BOOL)a2;
- (void)validateObject:(id)a0 withErrorHandler:(id /* block */)a1;

@end
