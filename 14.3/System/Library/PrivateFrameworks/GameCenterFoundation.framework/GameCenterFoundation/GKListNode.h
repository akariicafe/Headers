@interface GKListNode : NSObject

@property (nonatomic) GKListNode *nextNode;
@property (nonatomic) GKListNode *prevNode;
@property (retain, nonatomic) id value;

- (void)dealloc;
- (id)description;
- (id)initWithValue:(id)a0;

@end
