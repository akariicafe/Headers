@interface HFFakeMediaAccessoryItem : HFItem

@property (nonatomic) long long mediaAccessoryItemType;

- (id)description;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithMediaAccessoryItemType:(long long)a0;
- (id)createControlItemsWithOptions:(id)a0;

@end
