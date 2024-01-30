@class NSArray;

@interface UPResultRootNode : UPResultNode

@property (readonly, copy) NSArray *intermediateNodes;
@property (readonly, copy) NSArray *directLeafNodes;

- (id)_dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 intermediateNodes:(id)a1 directLeafNodes:(id)a2;

@end
