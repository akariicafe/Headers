@class HMHome, HFItem;
@protocol HFServiceLikeItem;

@interface HUServiceDetailsAbstractItem : HFItem

@property (retain, nonatomic) HFItem<HFServiceLikeItem> *sourceServiceItem;
@property (retain, nonatomic) HMHome *home;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isCamera;
- (BOOL)isItemGroup;
- (BOOL)isContainedWithinItemGroup;
- (id)_subclass_updateWithOptions:(id)a0;
- (BOOL)isBridge;
- (BOOL)isService;
- (BOOL)isAccessory;
- (id)sourceAccessory;
- (BOOL)isVisibleAsBridge;
- (BOOL)canShowAsIndividualTiles;
- (BOOL)isSensorService;
- (BOOL)isMediaAccessory;
- (BOOL)isContainedInAParent;
- (BOOL)isNetworkRouterSatellite;
- (id)initWithSourceServiceItem:(id)a0 home:(id)a1;
- (BOOL)isMultiServiceAccessory;
- (BOOL)isNotificationSupportedCamera;
- (BOOL)isMediaAccessoryGroup;
- (BOOL)isAccessoryDisplayedAsIndividualTiles;
- (BOOL)isNetworkRouter;

@end
