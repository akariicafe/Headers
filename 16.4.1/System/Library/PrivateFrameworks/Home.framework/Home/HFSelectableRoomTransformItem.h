@class HFRoomItem;

@interface HFSelectableRoomTransformItem : HFTransformItem

@property (readonly, nonatomic) HFRoomItem *roomItem;

- (id)initWithSourceItem:(id)a0 updateOptionsTransformBlock:(id /* block */)a1 resultsTransformBlock:(id /* block */)a2;
- (id)initWithRoomItem:(id)a0 accessoryVendor:(id)a1;

@end
