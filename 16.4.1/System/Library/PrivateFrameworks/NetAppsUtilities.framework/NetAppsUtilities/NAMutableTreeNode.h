@class NSSet;

@interface NAMutableTreeNode : NATreeNode

@property (retain, nonatomic) id representedObject;
@property (copy, nonatomic) NSSet *childNodes;

- (void)addChild:(id)a0;
- (void)removeChild:(id)a0;
- (void)addChildren:(id)a0;
- (void)removeChildrenPassingTest:(id /* block */)a0;
- (void)setChildNodes:(id)a0;

@end
