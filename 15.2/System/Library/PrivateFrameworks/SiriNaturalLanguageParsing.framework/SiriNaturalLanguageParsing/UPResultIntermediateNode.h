@class NSArray;

@interface UPResultIntermediateNode : UPResultNode

@property (readonly, copy) NSArray *leafNodes;

- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 andLeafNodes:(id)a1;

@end
