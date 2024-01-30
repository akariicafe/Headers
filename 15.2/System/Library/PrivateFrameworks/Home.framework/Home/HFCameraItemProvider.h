@class HMHome, NSMutableSet, HMRoom;

@interface HFCameraItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *cameraItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) HMRoom *room;
@property (nonatomic) BOOL onlyShowsFavorites;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
- (id /* block */)_roomFilter;
- (id /* block */)_favoriteFilter;

@end
