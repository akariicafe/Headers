@protocol HUDataAnalyticsModuleControllerDelegate;

@interface HUDataAnalyticsModuleController : HUItemTableModuleController

@property (weak, nonatomic) id<HUDataAnalyticsModuleControllerDelegate> dataAnalyticsModuleControllerDelegate;

- (id)module;
- (void).cxx_destruct;
- (BOOL)canSelectItem:(id)a0;
- (id)initWithModule:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (unsigned long long)didSelectItem:(id)a0;

@end
