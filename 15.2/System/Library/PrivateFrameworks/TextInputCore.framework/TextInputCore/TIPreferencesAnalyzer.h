@class NSString, TIPreferencesAnalyzerRegistry;

@interface TIPreferencesAnalyzer : NSObject <TIPreferencesAnalyzing>

@property (retain) TIPreferencesAnalyzerRegistry *registry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)_registerAnalyticsEventSpecWithAnalyticsService;
- (id)_createEventSpec;
- (void)analyzeRegisteredPreferences;
- (id)initWithRegistry:(id)a0;
- (void)_recordAnalysisOfPreferenceKey:(id)a0 inDomain:(id)a1;
- (void)_dispatchEventPayloadWithPreferenceName:(id)a0 activeInputModes:(id)a1 currentValue:(id)a2 previousValue:(id)a3 changedAt:(id)a4 analyzedAt:(id)a5 buildAtChange:(id)a6 isFreshInstall:(BOOL)a7;

@end
