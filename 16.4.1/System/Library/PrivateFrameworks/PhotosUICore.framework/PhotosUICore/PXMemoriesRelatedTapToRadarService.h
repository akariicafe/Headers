@interface PXMemoriesRelatedTapToRadarService : PXDiagnosticsService

+ (BOOL)isServiceAvailableForProviders:(id)a0;

- (id)title;
- (id)_libraryStatDictionary;
- (id)_providerItemsSummary;
- (BOOL)canProvideConsoleDescription;
- (BOOL)canProvideContextualViewController;
- (BOOL)canProvideSettingsViewController;
- (id)collectProviderItemsSummaryAndLibraryStat;
- (id)consoleDescription;
- (id)contextualViewController;
- (id)diagnosticFilesForPeopleContactSuggestionWithError:(id *)a0;
- (id)parseProviderItemsSummary:(id)a0 error:(id *)a1;
- (id)settingsViewController;
- (id)snapshotMemoriesRelatedResults:(id)a0 error:(id *)a1;
- (id)tapToRadarURLWithTitle:(id)a0 descriptionString:(id)a1;
- (void)writeErrorsToErrorLog:(id)a0;
- (id)writeGraphData:(id)a0 errorsList:(id)a1;
- (id)writeGraphStatistics:(id)a0 errorsList:(id)a1;
- (id)writeLibraryStatistics:(id)a0 analysisClient:(id)a1 errorsList:(id)a2;
- (id)writeMemoriesSummary:(id)a0 analysisClient:(id)a1 errorsList:(id)a2;
- (id)writePeopleContactSuggestionsGraphStatistics:(id)a0 errorsList:(id)a1;

@end
