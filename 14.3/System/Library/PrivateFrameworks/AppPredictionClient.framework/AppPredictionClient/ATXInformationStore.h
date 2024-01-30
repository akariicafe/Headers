@class NSString, _PASSqliteDatabase;

@interface ATXInformationStore : NSObject <_PASDatabaseMigrationProtocol> {
    NSString *_databasePath;
    NSString *_cachedSuggestionsPath;
    _PASSqliteDatabase *_db;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfInfoSuggestionsForSourceId:(id)a0;
- (BOOL)updateMostRecentSignificantDwellOfWidget:(id)a0 date:(id)a1;
- (id)readCachedSuggestions;
- (id)init;
- (id)fetchDistinctWidgetsIgnoringIntentSinceDate:(id)a0;
- (id)earliestFutureSuggestionChangeDate;
- (id)recentRelevantTimelineEntriesOrderedByDescendingScore:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (unsigned long long)numberOfTimelineInducedRotationsInPast24HrForWidget:(id)a0 kind:(id)a1 intent:(id)a2 considerStalenessRotation:(BOOL)a3;
- (BOOL)didSuggestionReachDurationLimit:(id)a0;
- (BOOL)rotationExistsForSuggestionWithId:(id)a0 considerStalenessRotation:(BOOL)a1;
- (BOOL)writeCacheWithNewSuggestions:(id)a0;
- (id)mostRecentEngagementOfWidget:(id)a0;
- (BOOL)updateMostRecentTapOfWidget:(id)a0 date:(id)a1;
- (id)mostRecentRotationRecordForSuggestionIdentifier:(id)a0;
- (BOOL)updateEndDateForInfoSuggestions:(id)a0;
- (void)dealloc;
- (id)criterionOfInfoSuggestionWithIdentifier:(id)a0;
- (BOOL)deleteInfoSuggestion:(id)a0;
- (id)latestInfoSuggestionRelevantNowForSourceId:(id)a0;
- (BOOL)_configureDatabase;
- (id)migrations;
- (BOOL)appendDismissRecord:(id)a0;
- (id)readCurrentlyRelevantSuggestions;
- (id)readAllDismissRecords;
- (BOOL)_handleCorruptionIfNeeded;
- (BOOL)clearOldAbuseControlOutcomeData;
- (BOOL)_openDatabase;
- (BOOL)insertOrIgnoreProactiveStackRotationRecord:(id)a0;
- (BOOL)_migrateDatabaseIfNeeded;
- (id)mostRecentEngagementOfWidget:(id)a0 kind:(id)a1;
- (id)fetchStackConfigStatisticsForWidgetBundleId:(id)a0 widgetKind:(id)a1 containerBundleIdentifier:(id)a2 widgetFamily:(long long)a3;
- (BOOL)deleteExpiredProactiveStackRotations;
- (BOOL)_insertTimelineEntries:(id)a0 forWidget:(id)a1 storageLimit:(unsigned long long)a2;
- (id)fetchAbuseControlOutcomesForSuggestion:(id)a0 sinceDate:(id)a1;
- (id)databaseHandle;
- (BOOL)addAbuseControlOutcomes:(id)a0;
- (BOOL)recordSuggestionPassedTimelineFiltersForTheFirstTime:(id)a0;
- (id)initWithDatabasePath:(id)a0 cachedSuggestionsPath:(id)a1;
- (id)mostRecentRotationRecordForWidget:(id)a0 kind:(id)a1 intent:(id)a2 considerStalenessRotation:(BOOL)a3 filterByClientModelId:(id)a4;
- (id)fetchTimelineEntriesForWidget:(id)a0 sinceDate:(id)a1;
- (id)firstTimeAtWhichSuggestionPassedTimelineFilters:(id)a0;
- (long long)mostRecentAbuseControlOutcomeForSuggestionId:(id)a0;
- (id)nextImportantDateAmongTimelineInducedProactiveStackRotationRecords;
- (id)readAllInfoSuggestionsWithSourceIdentifier:(id)a0;
- (BOOL)deleteAllInfoSuggestionsWithSourceIdentifier:(id)a0 error:(id *)a1;
- (id)mostRecentTimelineUpdateDateOfWidget:(id)a0 kind:(id)a1;
- (id)deleteExpiredSuggestions;
- (BOOL)addStackConfigStatistics:(id)a0;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)a0;
- (BOOL)writeInfoSuggestions:(id)a0;
- (BOOL)insertTimelineEntries:(id)a0 forWidget:(id)a1;
- (BOOL)atomicallyDeleteInfoSuggestions:(id)a0 insertInfoSuggestions:(id)a1;
- (BOOL)deleteAllSuggestionsForSourceId:(id)a0 excludingSuggestionId:(id)a1;
- (BOOL)addAbuseControlOutcomeForSuggestion:(id)a0 forTimestamp:(long long)a1 outcome:(long long)a2;
- (unsigned long long)numberOfInfoSuggestionsForAppBundleIdentifier:(id)a0;
- (id)_openSqliteDatabaseAtPath:(id)a0;
- (id)readAllInfoSuggestions;
- (id)latestUpdateDateForSourceId:(id)a0;

@end
