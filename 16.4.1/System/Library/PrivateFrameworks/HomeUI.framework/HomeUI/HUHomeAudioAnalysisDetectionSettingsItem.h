@class HMHome;

@interface HUHomeAudioAnalysisDetectionSettingsItem : HFItem

@property (readonly, nonatomic) unsigned long long audioDetectionType;
@property (readonly, nonatomic) HMHome *home;

- (void).cxx_destruct;
- (id)_localizedStringFromDetectionType:(unsigned long long)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithDetectionType:(unsigned long long)a0 home:(id)a1;

@end
