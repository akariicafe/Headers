@interface WFUserInteractionResource : WFResource <WFApplicationStateObserver>

+ (BOOL)isSingleton;

- (id)initWithDefinition:(id)a0;
- (void)dealloc;
- (void)applicationContext:(id)a0 applicationStateDidChange:(long long)a1;
- (void)refreshAvailability;

@end
