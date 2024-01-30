@class HMHome, HMRoom;

@interface HFActionSetListItem : HFItem

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMRoom *room;
@property (nonatomic) BOOL onlyShowsFavorites;

- (void).cxx_destruct;
- (id)init;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithHome:(id)a0 room:(id)a1;

@end
