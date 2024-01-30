@interface HFMutablePriorityQueueEntry : NSObject

@property (nonatomic) unsigned long long priority;
@property (readonly, nonatomic) id value;

- (void).cxx_destruct;
- (id)initWithValue:(id)a0;
- (id)initWithValue:(id)a0 priority:(long long)a1;

@end
