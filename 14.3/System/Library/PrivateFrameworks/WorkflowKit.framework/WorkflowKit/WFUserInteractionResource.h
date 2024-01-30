@interface WFUserInteractionResource : WFResource <WFApplicationStateObserver>

+ (BOOL)isSingleton;

- (void)dealloc;
- (id)initWithDefinition:(id)a0;
- (void)applicationContext:(id)a0 applicationStateDidChange:(long long)a1;
- (void)refreshAvailability;

@end
