@class HMHome, NSMutableSet, HMRoom;

@interface HFCameraItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *cameraItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) HMRoom *room;
@property (nonatomic) BOOL onlyShowsFavorites;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHome:(id)a0;
- (id)items;
- (id)invalidationReasons;
- (id /* block */)_roomFilter;
- (id /* block */)_favoriteFilter;
- (id)reloadItems;

@end
