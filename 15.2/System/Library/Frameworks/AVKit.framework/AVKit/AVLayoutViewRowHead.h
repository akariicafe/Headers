@class AVLayoutItemAttributes;

@interface AVLayoutViewRowHead : NSObject

@property (readonly, nonatomic) AVLayoutItemAttributes *firstAttributesInLayoutOrder;
@property (readonly, weak, nonatomic) AVLayoutItemAttributes *firstAttributesInPriorityOrder;

- (void).cxx_destruct;
- (id)initWithFirstAttributesInLayoutOrder:(id)a0 firstAttributesInPriorityOrder:(id)a1;

@end
