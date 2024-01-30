@class NSMutableArray;

@interface PHASERandomNodeDefinition : PHASESoundEventNodeDefinition

@property (retain, nonatomic) NSMutableArray *subtrees;
@property (nonatomic) long long noRepeatLastX;
@property (nonatomic) long long uniqueSelectionQueueLength;

- (id)initWithIdentifier:(id)a0;
- (id)children;
- (id)initWithUID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addSubtree:(id)a0 weight:(id)a1;
- (long long)noRepeatLastX;
- (void)setNoRepeatLastX:(long long)a0;

@end
