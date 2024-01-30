@protocol PXBrowserSelectionSnapshot;

@interface _PXBrowserSummarySelectedItemsSnapshot : NSObject <PXSelectedItemsSnapshot>

@property (readonly, nonatomic) id<PXBrowserSelectionSnapshot> browserSelectionSnapshot;
@property (readonly, nonatomic) long long count;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBrowserSelectionSnapshot:(id)a0;
- (id)itemReferenceAtIndex:(long long)a0;
- (id)containsItemReference:(id)a0;
- (id)itemForItemReference:(id)a0;

@end
