@interface SBUIRemoteAlertButtonAction : BSAction

@property (readonly, nonatomic) unsigned long long events;

- (void)sendResponse:(id)a0 withCompletion:(id /* block */)a1;
- (id)settings:(id)a0 valueDescriptionForFlag:(long long)a1 object:(id)a2 ofSetting:(unsigned long long)a3;
- (id)settings:(id)a0 keyDescriptionForSetting:(unsigned long long)a1;
- (id)initWithEvents:(unsigned long long)a0;
- (void)sendResponseWithUnHandledEvents:(unsigned long long)a0;
- (id)initWithEvents:(unsigned long long)a0 withHandler:(id /* block */)a1;

@end
