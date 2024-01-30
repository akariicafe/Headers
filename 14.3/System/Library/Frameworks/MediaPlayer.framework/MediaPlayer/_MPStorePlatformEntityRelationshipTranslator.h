@interface _MPStorePlatformEntityRelationshipTranslator : _MPKeyPathEntityRelationshipTranslator

@property (readonly, nonatomic) id /* block */ payloadTransformBlock;

- (void).cxx_destruct;
- (id)initWithRelatedMPModelClass:(Class)a0 payloadTransformBlock:(id /* block */)a1;
- (id)prepareSource:(id)a0 context:(id)a1;

@end
