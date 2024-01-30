@class NSMutableArray;

@interface HUIconContentViewReuseQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *reuseStack;
@property (readonly, nonatomic) Class contentViewClass;

+ (id)globalReuseQueueForContentViewClass:(Class)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithContentViewClass:(Class)a0;
- (id)dequeueContentView;
- (void)reapContentView:(id)a0;

@end
