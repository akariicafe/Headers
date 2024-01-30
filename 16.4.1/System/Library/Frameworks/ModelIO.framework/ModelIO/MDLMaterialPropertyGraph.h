@class NSArray, NSMutableArray;

@interface MDLMaterialPropertyGraph : MDLMaterialPropertyNode {
    NSMutableArray *_finalNodes;
}

@property (readonly, nonatomic) NSArray *nodes;
@property (readonly, nonatomic) NSArray *connections;

- (void)evaluate;
- (void).cxx_destruct;
- (id)initWithNodes:(id)a0 connections:(id)a1;

@end
