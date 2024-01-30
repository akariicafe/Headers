@class NSArray, NSString, TIMetricDescriptorRegistry;

@interface TIKBUserModel : TIUserModel <TIKBUserModeling, TIKBMetricProviding, TIUserModelConfigurationDelegate>

@property (readonly, nonatomic) TIMetricDescriptorRegistry *metricDescriptorRegistry;
@property (readonly, nonatomic) NSArray *kbContexts;
@property (readonly, nonatomic) NSArray *contexts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userModelWithInputMode:(id)a0 userModelDataStore:(id)a1;
+ (id)userModelWithInputMode:(id)a0 userModelDataStore:(id)a1 metricDescriptorRegistry:(id)a2 fromDate:(id)a3;

- (void)addMetric:(id)a0 toWeeklyMetricKeys:(id)a1;
- (id)valueForMetricWithName:(id)a0 withContext:(id)a1;
- (void)addDescriptor:(id)a0 toWeeklyMetricKeys:(id)a1;
- (Class)userModelValuesClass;
- (void)trackPowerLogIfNecessary;
- (id)durableCounterKeys;
- (void)doLoad;
- (id)settingsDictionary;
- (void).cxx_destruct;
- (void)sessionDidEnd:(id)a0 aligned:(id)a1;
- (id)valuesByBucketedWordLengthForMetricWithName:(id)a0 withContext:(id)a1;
- (id)initWithInputMode:(id)a0 userModelDataStore:(id)a1 metricDescriptorRegistry:(id)a2 fromDate:(id)a3;
- (id)dictForPowerLog;

@end
