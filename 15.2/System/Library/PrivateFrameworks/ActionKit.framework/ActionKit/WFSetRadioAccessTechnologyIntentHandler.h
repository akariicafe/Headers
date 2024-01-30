@class NSString;

@interface WFSetRadioAccessTechnologyIntentHandler : NSObject <WFSetRadioAccessTechnologyIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contexts;
- (id)client;
- (id)defaultContext;
- (id)defaultSimForSetRadioAccessTechnology:(id)a0;
- (id)defaultRatModeForSetRadioAccessTechnology:(id)a0;
- (void)handleSetRadioAccessTechnology:(id)a0 completion:(id /* block */)a1;
- (void)provideSimOptionsCollectionForSetRadioAccessTechnology:(id)a0 withCompletion:(id /* block */)a1;
- (void)provideRatModeOptionsCollectionForSetRadioAccessTechnology:(id)a0 withCompletion:(id /* block */)a1;
- (void)setRadioAccessTechnologyMode:(long long)a0 forContext:(id)a1 completion:(id /* block */)a2;
- (BOOL)smartDataModeEnabledForContext:(id)a0;
- (void)setSmartDataMode:(BOOL)a0 forContext:(id)a1;
- (void)enumerateAvailableRadioAccessTechnologyModesForContext:(id)a0 enumerationBlock:(id /* block */)a1;
- (id)labelForRadioAccessTechnologyMode:(long long)a0 context:(id)a1;
- (id)modesFromDataRate:(long long)a0;
- (id)dataRateToRadioAccessTechnologyModeMapping;
- (id)labelForContext:(id)a0;

@end
