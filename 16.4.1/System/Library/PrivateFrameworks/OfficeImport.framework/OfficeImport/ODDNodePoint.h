@class NSMutableArray, ODDTransitionPoint;

@interface ODDNodePoint : ODDDataPoint {
    ODDNodePoint *mParent;
    NSMutableArray *mChildren;
    ODDTransitionPoint *mParentTransition;
    ODDTransitionPoint *mSiblingTransition;
}

- (id)parent;
- (void)setType:(int)a0;
- (id)children;
- (void).cxx_destruct;
- (void)addChild:(id)a0 order:(unsigned long long)a1;
- (id)parentTransition;
- (void)setParentTransition:(id)a0;
- (void)setSiblingTransition:(id)a0;
- (id)siblingTransition;

@end
