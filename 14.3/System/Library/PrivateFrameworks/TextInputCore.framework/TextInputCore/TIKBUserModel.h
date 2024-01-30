@class NSArray, NSString;

@interface TIKBUserModel : TIUserModel <TIKBUserModeling, TIKBMetricProviding, TIUserModelConfigurationDelegate>

@property (readonly, nonatomic) NSArray *kbContexts;
@property (readonly, nonatomic) NSArray *contexts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userModelWithInputMode:(id)a0 userModelDataStore:(id)a1;

- (void)trackPowerLogIfNecessary;
- (id)settingsDictionary;
- (Class)userModelValuesClass;
- (id)durableCounterKeys;
- (id)initWithInputMode:(id)a0 userModelDataStore:(id)a1;
- (void)sessionDidEnd:(id)a0 aligned:(id)a1;
- (id)valueForMetricWithName:(id)a0 withContext:(id)a1 fromRegistry:(id)a2;
- (id)valuesByBucketedWordLengthForMetricWithName:(id)a0 withContext:(id)a1 fromRegistry:(id)a2;
- (id)dictForPowerLog;

@end
