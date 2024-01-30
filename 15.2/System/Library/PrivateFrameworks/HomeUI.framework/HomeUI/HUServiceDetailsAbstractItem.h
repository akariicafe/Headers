@class HMHome, HFItem;
@protocol HFServiceLikeItem;

@interface HUServiceDetailsAbstractItem : HFItem

@property (retain, nonatomic) HFItem<HFServiceLikeItem> *sourceServiceItem;
@property (retain, nonatomic) HMHome *home;

- (BOOL)isBridge;
- (void).cxx_destruct;
- (BOOL)isCamera;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isBridged;
- (id)_subclass_updateWithOptions:(id)a0;
- (BOOL)isItemGroup;
- (BOOL)isContainedWithinItemGroup;
- (BOOL)isService;
- (BOOL)isAccessory;
- (BOOL)isMediaAccessory;
- (id)sourceAccessory;
- (BOOL)isVisibleAsBridge;
- (BOOL)canShowAsIndividualTiles;
- (BOOL)isSensorService;
- (BOOL)isContainedInAParent;
- (BOOL)isNetworkRouterSatellite;
- (BOOL)isAccessoryDisplayedAsIndividualTiles;
- (BOOL)isCHIPAccessory;
- (id)initWithSourceServiceItem:(id)a0 home:(id)a1;
- (BOOL)isMultiServiceAccessory;
- (BOOL)isNotificationSupportedCamera;
- (BOOL)isMediaAccessoryGroup;
- (BOOL)isNetworkRouter;

@end
