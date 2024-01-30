@class NSString, NSArray, NSMutableArray;

@interface PKApplicationMessageNodeMultipleGroupBranch : PKApplicationMessageNode {
    NSMutableArray *_children;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *children;

- (void).cxx_destruct;
- (id)createSummary;

@end
