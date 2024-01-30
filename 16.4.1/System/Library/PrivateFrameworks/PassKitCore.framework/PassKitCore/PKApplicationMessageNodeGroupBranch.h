@class NSArray, NSMutableArray, PKApplicationMessageGroupDescriptor;

@interface PKApplicationMessageNodeGroupBranch : PKApplicationMessageNode {
    NSMutableArray *_children;
}

@property (readonly, nonatomic) PKApplicationMessageGroupDescriptor *group;
@property (readonly, nonatomic) NSArray *children;

- (void).cxx_destruct;

@end
