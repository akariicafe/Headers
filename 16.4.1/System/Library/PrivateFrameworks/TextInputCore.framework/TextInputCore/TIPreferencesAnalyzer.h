@class NSString, TIPreferencesAnalyzerRegistry;

@interface TIPreferencesAnalyzer : NSObject <TIPreferencesAnalyzing>

@property (retain) TIPreferencesAnalyzerRegistry *registry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_registerAnalyticsEventSpecWithAnalyticsService;
- (id)init;
- (void).cxx_destruct;
- (id)_createEventSpecForTextInputUserPreferenceChanges;
- (id)_createEventSpecForTextInputUserPreferenceState;
- (void)_dispatchEventPayloadWithPreferenceNameToChangesEvent:(id)a0 activeInputModes:(id)a1 currentValue:(id)a2 previousValue:(id)a3 changedAt:(id)a4 analyzedAt:(id)a5 buildAtChange:(id)a6 isFreshInstall:(BOOL)a7 approxDateOfBuildInstall:(id)a8 buildAtLastAnalysis:(id)a9;
- (void)_dispatchEventPayloadWithPreferenceNameToStateEvent:(id)a0 activeInputModes:(id)a1 currentValue:(id)a2;
- (void)_recordAnalysisOfPreferenceKey:(id)a0 inDomain:(id)a1;
- (void)_resetChangedAtForPreferenceKey:(id)a0 inDomain:(id)a1;
- (void)_updateApproxBuildAtLastAnalysisWithBuild:(id)a0 andApproxDateOfInstall:(id)a1 ForPreferenceKey:(id)a2 inDomain:(id)a3;
- (void)analyzeRegisteredPreferences;
- (id)initWithRegistry:(id)a0;

@end
