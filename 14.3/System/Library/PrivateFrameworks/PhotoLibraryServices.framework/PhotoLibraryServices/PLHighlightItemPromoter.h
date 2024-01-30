@protocol PLHighlightItemPromoterRule;

@interface PLHighlightItemPromoter : NSObject

@property (readonly, nonatomic) id<PLHighlightItemPromoterRule> rule;

- (void)processHighlightItemsInHighlightItemList:(id)a0 resultBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithRule:(id)a0;

@end
