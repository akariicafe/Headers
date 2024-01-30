@class HFGroupedItemDiff;

@interface HFItemManagerDelegateUpdateRequest : NSObject

@property (readonly, copy, nonatomic) id /* block */ applyChangesBlock;
@property (readonly, copy, nonatomic) id /* block */ issueDelegateMessagesBlock;
@property (readonly, nonatomic) BOOL debug_wasPerformed;
@property (readonly, nonatomic) HFGroupedItemDiff *changes;
@property (readonly, nonatomic, getter=isInitialUpdate) BOOL initialUpdate;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithChanges:(id)a0 isInitialUpdate:(BOOL)a1 applyChangesBlock:(id /* block */)a2 issueDelegateMessagesBlock:(id /* block */)a3;
- (void)performWithOptions:(unsigned long long)a0;

@end
