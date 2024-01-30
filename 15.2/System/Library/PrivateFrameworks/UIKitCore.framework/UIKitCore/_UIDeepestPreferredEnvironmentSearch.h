@class _UIDebugLogReport;

@interface _UIDeepestPreferredEnvironmentSearch : NSObject

@property (nonatomic) BOOL allowsFocusRestoration;
@property (retain, nonatomic) _UIDebugLogReport *debugReport;

- (id)_overridingPreferredFocusEnvironmentForPreferredEnvironment:(id)a0 visitedFocusEnvironments:(id)a1;
- (void)_reportDidFinishEnumeratingPreferencesWithDeepestPreferredFocusableItem:(id)a0;
- (void)_reportFinishedEvaluatingAllPreferencesForEnvironmentInContext:(id)a0 result:(long long)a1;
- (void)_reportDidFindOverridingPreferredFocusEnvironment:(id)a0 source:(id)a1;
- (id)deepestPreferredFocusableItemForEnvironment:(id)a0 withRequest:(id)a1;
- (void).cxx_destruct;
- (void)_reportFoundFocusableItem:(id)a0;
- (void)_reportStartingSearch;
- (void)_reportSearchingEnvironment:(id)a0;
- (id)deepestPreferredFocusEnvironmentForEnvironment:(id)a0;

@end
