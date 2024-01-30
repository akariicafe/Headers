@class NSDictionary, NSMutableDictionary;

@interface WFActionGroupingCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *contents;
@property (readonly, nonatomic) NSDictionary *actionsByGroupingIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)removeAction:(id)a0;
- (id)actionsForGroupingIdentifier:(id)a0;
- (void)addAction:(id)a0 sortingWithWorkflowActions:(id)a1;
- (void)sortActionsForGroupingIdentifier:(id)a0 withWorkflowActions:(id)a1;

@end
