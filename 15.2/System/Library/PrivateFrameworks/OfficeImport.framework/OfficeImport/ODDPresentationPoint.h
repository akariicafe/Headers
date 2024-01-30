@class NSMutableArray;

@interface ODDPresentationPoint : ODDPoint {
    ODDPresentationPoint *mParent;
    NSMutableArray *mChildren;
}

- (id)parent;
- (id)children;
- (void).cxx_destruct;
- (void)setType:(int)a0;
- (void)addChild:(id)a0 order:(unsigned long long)a1;

@end
