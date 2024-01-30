@class HFRoomItem;

@interface HFSelectableRoomTransformItem : HFTransformItem

@property (readonly, nonatomic) HFRoomItem *roomItem;

- (id)initWithRoomItem:(id)a0 accessoryVendor:(id)a1;
- (id)initWithSourceItem:(id)a0 updateOptionsTransformBlock:(id /* block */)a1 resultsTransformBlock:(id /* block */)a2;

@end
