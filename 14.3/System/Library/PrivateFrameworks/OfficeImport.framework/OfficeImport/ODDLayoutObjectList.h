@class NSMutableArray;

@interface ODDLayoutObjectList : ODDLayoutObject {
    NSMutableArray *mChildren;
}

- (id)init;
- (void)addChild:(id)a0;
- (void).cxx_destruct;
- (id)children;

@end
