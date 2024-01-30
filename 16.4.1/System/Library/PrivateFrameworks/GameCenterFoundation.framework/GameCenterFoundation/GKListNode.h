@interface GKListNode : NSObject

@property (retain, nonatomic) GKListNode *nextNode;
@property (retain, nonatomic) GKListNode *prevNode;
@property (retain, nonatomic) id value;

- (id)initWithValue:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
