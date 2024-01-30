@class MAAbstractNode;

@interface MAAbstractEdge : MAConcreteEdge {
    MAAbstractNode *_sourceAbstractNode;
    MAAbstractNode *_targetAbstractNode;
}

- (id)targetNode;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (void).cxx_destruct;
- (id)sourceNode;
- (id)oppositeNode:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;

@end
