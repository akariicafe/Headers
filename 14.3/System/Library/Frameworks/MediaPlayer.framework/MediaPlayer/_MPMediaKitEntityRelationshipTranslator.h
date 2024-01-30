@class NSString;

@interface _MPMediaKitEntityRelationshipTranslator : _MPKeyPathEntityRelationshipTranslator

@property (copy, nonatomic) NSString *mediaKitType;
@property (readonly, nonatomic) id /* block */ payloadTransformBlock;

- (void).cxx_destruct;
- (id)prepareSource:(id)a0 context:(id)a1;
- (id)initWithRelatedMPModelClass:(Class)a0 mediaKitType:(id)a1 payloadTransformBlock:(id /* block */)a2;

@end
