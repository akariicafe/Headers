@interface HFClimateStatusItem : HFAbstractGroupedStatusItem

+ (id)sortKey;
+ (id)statusItemClasses;

- (id)_subclass_updateWithOptions:(id)a0;
- (BOOL)shouldEncapsulateItem:(id)a0;

@end
