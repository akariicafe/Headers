@interface SBUIRemoteAlertButtonActionResponse : BSActionResponse

@property (readonly, nonatomic) unsigned long long unHandledEvents;

- (id)settings:(id)a0 valueDescriptionForFlag:(long long)a1 object:(id)a2 ofSetting:(unsigned long long)a3;
- (id)settings:(id)a0 keyDescriptionForSetting:(unsigned long long)a1;
- (id)initWithUnHandledEvents:(unsigned long long)a0;

@end
