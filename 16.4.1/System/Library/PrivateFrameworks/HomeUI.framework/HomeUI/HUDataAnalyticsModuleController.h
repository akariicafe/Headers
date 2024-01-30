@protocol HUDataAnalyticsModuleControllerDelegate;

@interface HUDataAnalyticsModuleController : HUItemModuleController

@property (weak, nonatomic) id<HUDataAnalyticsModuleControllerDelegate> dataAnalyticsModuleControllerDelegate;

- (id)module;
- (void).cxx_destruct;
- (id)initWithModule:(id)a0;
- (BOOL)canSelectItem:(id)a0;
- (unsigned long long)didSelectItem:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;

@end
