@class NSMutableArray;

@interface ODDPresentationPoint : ODDPoint {
    ODDPresentationPoint *mParent;
    NSMutableArray *mChildren;
}

- (void).cxx_destruct;
- (void)setType:(int)a0;
- (id)parent;
- (id)children;
- (void)addChild:(id)a0 order:(unsigned long long)a1;

@end
