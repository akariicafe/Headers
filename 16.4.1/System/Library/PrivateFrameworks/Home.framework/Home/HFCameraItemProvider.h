@class HMHome, NSMutableSet, HMRoom;

@interface HFCameraItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *cameraItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) HMRoom *room;
@property (nonatomic) BOOL onlyShowsFavorites;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)invalidationReasons;
- (id /* block */)_favoriteFilter;
- (id /* block */)_roomFilter;
- (id /* block */)_showInHomeDashboardFilter;

@end
