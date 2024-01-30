@class NSMutableArray, ODDTransitionPoint;

@interface ODDNodePoint : ODDDataPoint {
    ODDNodePoint *mParent;
    NSMutableArray *mChildren;
    ODDTransitionPoint *mParentTransition;
    ODDTransitionPoint *mSiblingTransition;
}

- (void).cxx_destruct;
- (void)setType:(int)a0;
- (id)parent;
- (id)children;
- (id)siblingTransition;
- (id)parentTransition;
- (void)addChild:(id)a0 order:(unsigned long long)a1;
- (void)setParentTransition:(id)a0;
- (void)setSiblingTransition:(id)a0;

@end
