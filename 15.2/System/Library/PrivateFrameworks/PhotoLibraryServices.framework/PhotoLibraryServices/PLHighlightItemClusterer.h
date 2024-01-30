@protocol PLHighlightItemClustererRule;

@interface PLHighlightItemClusterer : NSObject

@property (readonly, nonatomic) id<PLHighlightItemClustererRule> rule;

- (void).cxx_destruct;
- (id)initWithRule:(id)a0;
- (void)restoreExistingHighlightItemListsFromUpdatedHighlightItems:(id)a0 deletedHighlightItems:(id)a1 usingModelReader:(id)a2 progressBlock:(id /* block */)a3 restoreBlock:(id /* block */)a4;
- (id)processHighlightItems:(id)a0 withRestoredHighlightItemLists:(id)a1 progressBlock:(id /* block */)a2;

@end
