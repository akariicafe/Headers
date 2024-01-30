@class HMHome, NSMutableSet;

@interface HUHomeAudioAnalysisDetectionSettingsItemProvider : HFItemProvider

@property (readonly, nonatomic) NSMutableSet *items;
@property (readonly, nonatomic) HMHome *home;

- (id)init;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)initWithHome:(id)a0;

@end
