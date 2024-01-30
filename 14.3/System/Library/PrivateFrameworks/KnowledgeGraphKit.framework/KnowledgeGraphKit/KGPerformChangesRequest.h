@interface KGPerformChangesRequest : NSObject

@property (readonly, nonatomic) unsigned long long count;

- (void)removeAllObjects;
- (void)recordNodeRequest:(id)a0;
- (void)recordEdgeRequest:(id)a0;
- (BOOL)_applyChangesForGraph:(id)a0 error:(id *)a1;
- (BOOL)commitRequestInGraph:(id)a0 error:(id *)a1;

@end
