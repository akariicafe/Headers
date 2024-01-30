@class ODDLayoutNode;

@interface ODDLayout : NSObject {
    ODDLayoutNode *mRootNode;
}

- (id)init;
- (void).cxx_destruct;
- (id)rootNode;
- (id)description;

@end
