@class HMHome;

@interface HUWelcomeBannerItem : HFItem

@property (readonly, nonatomic) HMHome *home;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (BOOL)_shouldHideDiscoverHomeBanner;

@end
