@class AXSSPunctuationEntryCloudKitHelper, NSString, NSArray, AXSSPunctuationGroupCloudKitHelper;

@interface AXSSPunctuationManager : AXSSDatabaseManager {
    AXSSPunctuationEntryCloudKitHelper *_punctuationEntryCloudKitHelper;
    AXSSPunctuationGroupCloudKitHelper *_punctuationGroupCloudKitHelper;
    BOOL _finishedInitialization;
}

@property (class, retain, nonatomic) NSString *overrideDatabasePath;

@property (nonatomic) BOOL cloudKitSync;
@property (nonatomic) BOOL cloudKitPushInSameProcess;
@property (readonly, nonatomic) NSArray *punctuationGroups;

+ (void)initialize;
+ (id)sharedDatabase;

- (void)updateEntry:(id)a0;
- (void)_setupDatabase;
- (void)removeEntry:(id)a0;
- (id)init;
- (BOOL)isProtectedDataAvailable;
- (void).cxx_destruct;
- (BOOL)_saveIfPossible;
- (void)userAuthChanged;
- (id)punctuationEntriesForGroupUUID:(id)a0;
- (void)_cloudKitUpdated:(id)a0;
- (id)_databaseDirectoryPath;
- (id)_databaseFilePath;
- (void)_filterAutoswitchContexts:(id)a0 punctuationGroupsForContexts:(id)a1;
- (void)_initializeCloudKitHelpers;
- (void)_initializeDatabaseStartup;
- (void)_initializeSystemGroups;
- (void)_managedObjectChanged:(id)a0;
- (id)_punctuationEntryFromManagedObject:(id)a0;
- (id)_punctuationGroupForEntry:(id)a0;
- (id)_punctuationGroupFromManagedObject:(id)a0;
- (void)_updateCloudKitHelpers;
- (void)addCloudRecordToPurge:(id)a0 recordEntityType:(id)a1;
- (id)allPunctuationGroup;
- (id)cloudRecordsToPurge:(id)a0;
- (void)importPunctuationGroup:(id)a0;
- (BOOL)isBasePunctuationGroup:(id)a0;
- (id)mostBasePunctuationGroupForGroup:(id)a0;
- (id)nextDefaultGroupName;
- (id)nonePunctuationGroup;
- (id)parentPunctuationGroup:(id)a0;
- (id)punctuationEntryForUUID:(id)a0;
- (id)punctuationEntryObjectFromLocalObjects:(id)a0;
- (id)punctuationGroupForUUID:(id)a0;
- (id)punctuationGroupsForContexts;
- (void)removeAllRecordsForPurge;
- (void)removeCloudRecordForPurge:(id)a0;
- (void)removePunctuationGroup:(id)a0;
- (id)ruleToString:(long long)a0;
- (id)somePunctuationGroup;
- (long long)stringToRule:(id)a0;
- (void)updateEntry:(id)a0 fromCloudKit:(BOOL)a1;
- (void)updatePunctuationGroup:(id)a0;
- (void)updatePunctuationGroup:(id)a0 fromCloudKit:(BOOL)a1;

@end
