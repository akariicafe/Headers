@class HFItem, HUHomeAccessoryTileView;
@protocol HFServiceLikeItem;

@interface HUPCSetupAccessoryContentController : HUPCCenterFillContentController

@property (readonly, nonatomic) HUHomeAccessoryTileView *homeAccessoryTileView;
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *item;

- (void).cxx_destruct;
- (double)_contentAspectRatio;
- (id)initWithTitle:(id)a0 detailText:(id)a1 item:(id)a2;

@end
