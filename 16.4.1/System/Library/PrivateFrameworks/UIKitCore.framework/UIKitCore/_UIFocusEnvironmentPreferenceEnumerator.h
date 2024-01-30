@class NSString, _UIDebugLogNode;

@interface _UIFocusEnvironmentPreferenceEnumerator : NSObject <_UIFocusEnvironmentPreferenceEnumerationContextDelegate>

@property (readonly, nonatomic) long long enumerationMode;
@property (copy, nonatomic) id /* block */ didVisitAllPreferencesForEnvironmentHandler;
@property (nonatomic) BOOL allowsInferringPreferences;
@property (copy, nonatomic) id /* block */ shouldInferPreferenceForEnvironmentHandler;
@property (retain, nonatomic) _UIDebugLogNode *debugLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_shouldInferDefaultPreferenceForEnvironmentInContext:(id)a0;
- (void)enumeratePreferencesForEnvironment:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithEnumerationMode:(long long)a0;

@end
