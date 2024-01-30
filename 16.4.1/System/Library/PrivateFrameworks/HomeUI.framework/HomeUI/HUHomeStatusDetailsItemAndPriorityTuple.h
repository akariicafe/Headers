@class HFItem;

@interface HUHomeStatusDetailsItemAndPriorityTuple : NSObject

@property (weak, nonatomic) HFItem *item;
@property (nonatomic) long long priority;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0 priority:(long long)a1;

@end
