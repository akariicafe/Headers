@class HFAccessoryTypeGroup, NSArray, NSString;

@interface HFAccessoryCategoryStatusItem : HFStatusItem <HFReorderableItemListItemProtocol>

@property (readonly, nonatomic) HFAccessoryTypeGroup *accessoryTypeGroup;
@property (readonly, nonatomic) NSArray *statusItems;
@property (readonly, copy, nonatomic) NSString *uuidString;

+ (id)statusItemClasses;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)sortedActionSetItemsWithProvider:(id)a0;
- (id)_statusItemOfClass:(Class)a0;
- (id /* block */)accessoryTypeGroupFilter;
- (id)initWithHome:(id)a0 room:(id)a1 valueSource:(id)a2;

@end
