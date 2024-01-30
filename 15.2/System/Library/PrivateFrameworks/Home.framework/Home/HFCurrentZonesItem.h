@class HMRoom;

@interface HFCurrentZonesItem : HFItem

@property (readonly, nonatomic) HMRoom *room;

- (void).cxx_destruct;
- (id)init;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithRoom:(id)a0;

@end
