@class NSMutableDictionary, NSMutableSet;

@interface MPBaseEntityTranslator : NSObject {
    NSMutableDictionary *_propertiesToTranslators;
    NSMutableDictionary *_relationshipsToTranslators;
    id /* block */ _sourcePreprocessorBlock;
    NSMutableSet *_unsupportedKeys;
    struct { unsigned char _relationshipPreparesSource : 1; } _optionalHooks;
}

@property (readonly, nonatomic) Class MPModelClass;

+ (id)translatorForMPModelClass:(Class)a0;
+ (void)buildSchemaIfNeeded;
+ (id)createTranslatorForMPModelClass:(Class)a0;

- (void).cxx_destruct;
- (id)description;
- (Class)classForRelationshipKey:(id)a0;
- (id)initWithMPModelClass:(Class)a0;
- (id)prepareSource:(id)a0 context:(id)a1 properties:(id)a2;
- (void)setSourcePreprocessorBlock:(id /* block */)a0;
- (void)mapUnsupportedPropertyKey:(id)a0;
- (void)mapUnsupportedRelationshipKey:(id)a0;
- (id)_objectForPropertySet:(id)a0 source:(id)a1 context:(id)a2;
- (id)_objectForRelationshipKey:(id)a0 propertySet:(id)a1 source:(id)a2 context:(id)a3;
- (id)_valueForPropertyKey:(id)a0 source:(id)a1 context:(id)a2;

@end
