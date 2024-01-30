@protocol HDDatabaseCorruptionTTRPromptDataSource;

@interface HDDatabaseCorruptionTTRPrompter : NSObject {
    id<HDDatabaseCorruptionTTRPromptDataSource> _dataSource;
}

@property (copy, nonatomic) id /* block */ unitTest_willPresentTTRAlertHandler;

+ (id)defaultPrompterWithProfile:(id)a0;

- (id)initWithDataSource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_promptTTRWithDatabaseType:(long long)a0 isSQLite:(BOOL)a1 description:(id)a2 error:(id)a3;
- (BOOL)_deviceSupportsCorruptionPrompt;
- (id)_persistedDatabaseCorruptionContextForSQLite:(BOOL)a0 databaseType:(long long)a1;
- (id)_currentDatabaseCorruptionContextForError:(id)a0;
- (void)_persistDatabaseCorruptionContext:(id)a0 isSQLite:(BOOL)a1 databaseType:(long long)a2;
- (id)_currentDatabaseIdentifierAndBuildString;
- (id)_persistedDatabaseIdentifierAndBuildFromPriorPromptForSQLite:(BOOL)a0 databaseType:(long long)a1;
- (void)_popAlertWithRadarDescription:(id)a0;
- (void)_persistDatabaseIdentifierAndBuild:(id)a0 isSQLite:(BOOL)a1 databaseType:(long long)a2;
- (id)_defaultKeyForSQLite:(BOOL)a0 databaseType:(long long)a1 suffix:(id)a2;
- (void)promptTTRForSQLiteCorruptionWithDatabaseType:(long long)a0 corruptionError:(id)a1;
- (void)promptTTRForHFDCorruptionWithFailureType:(long long)a0 corruptionError:(id)a1;

@end
