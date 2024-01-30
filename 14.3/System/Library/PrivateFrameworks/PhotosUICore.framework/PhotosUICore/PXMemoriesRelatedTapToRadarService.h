@interface PXMemoriesRelatedTapToRadarService : PXDiagnosticsService

+ (BOOL)isServiceAvailableForProviders:(id)a0;

- (id)contextualViewController;
- (BOOL)canProvideConsoleDescription;
- (id)consoleDescription;
- (BOOL)canProvideContextualViewController;
- (BOOL)canProvideSettingsViewController;
- (id)settingsViewController;
- (id)_libraryStatDictionary;
- (id)_providerItemsSummary;
- (id)parseProviderItemsSummary:(id)a0 error:(id *)a1;
- (id)collectProviderItemsSummaryAndLibraryStat;
- (id)tapToRadarURLWithTitle:(id)a0 descriptionString:(id)a1;
- (id)writeGraphData:(id)a0 errorsList:(id)a1;
- (id)writeGraphStatistics:(id)a0 errorsList:(id)a1;
- (id)writePeopleContactSuggestionsGraphStatistics:(id)a0 errorsList:(id)a1;
- (id)writeMemoriesSummary:(id)a0 analysisClient:(id)a1 errorsList:(id)a2;
- (id)writeLibraryStatistics:(id)a0 analysisClient:(id)a1 errorsList:(id)a2;
- (void)writeErrorsToErrorLog:(id)a0;
- (id)diagnosticFilesForPeopleContactSuggestionWithError:(id *)a0;
- (id)snapshotMemoriesRelatedResults:(id)a0 error:(id *)a1;
- (id)title;

@end
