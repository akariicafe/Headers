@protocol TSPForwardsCompatibleField;

@interface TSPFieldTreeNodeWithUnknownField : TSPFieldTreeNode

@property (retain, nonatomic) id<TSPForwardsCompatibleField> field;

- (void).cxx_destruct;

@end
