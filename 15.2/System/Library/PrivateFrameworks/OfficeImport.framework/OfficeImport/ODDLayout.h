@class ODDLayoutNode;

@interface ODDLayout : NSObject {
    ODDLayoutNode *mRootNode;
}

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)rootNode;

@end
