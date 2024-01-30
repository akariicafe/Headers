@interface GKListNode : NSObject

@property (retain, nonatomic) GKListNode *nextNode;
@property (retain, nonatomic) GKListNode *prevNode;
@property (retain, nonatomic) id value;

- (id)description;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0;

@end
