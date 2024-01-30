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

- (void)removeEntry:(id)a0;
- (id)_punctuationGroupFromManagedObject:(id)a0;
- (BOOL)isProtectedDataAvailable;
- (id)allPunctuationGroup;
- (id)init;
- (void)importPunctuationGroup:(id)a0;
- (id)somePunctuationGroup;
- (void).cxx_destruct;
- (void)updatePunctuationGroup:(id)a0;
- (id)_punctuationGroupForEntry:(id)a0;
- (id)_databaseDirectoryPath;
- (void)updatePunctuationGroup:(id)a0 fromCloudKit:(BOOL)a1;
- (void)updateEntry:(id)a0 fromCloudKit:(BOOL)a1;
- (id)_databaseFilePath;
- (id)mostBasePunctuationGroupForGroup:(id)a0;
- (id)punctuationGroupForUUID:(id)a0;
- (id)punctuationEntryForUUID:(id)a0;
- (void)_cloudKitUpdated:(id)a0;
- (id)cloudRecordsToPurge:(id)a0;
- (void)_initializeCloudKitHelpers;
- (void)_initializeSystemGroups;
- (id)_punctuationEntryFromManagedObject:(id)a0;
- (void)updateEntry:(id)a0;
- (void)_filterAutoswitchContexts:(id)a0 punctuationGroupsForContexts:(id)a1;
- (id)parentPunctuationGroup:(id)a0;
- (id)nonePunctuationGroup;
- (void)_setupDatabase;
- (BOOL)isBasePunctuationGroup:(id)a0;
- (void)addCloudRecordToPurge:(id)a0 recordEntityType:(id)a1;
- (id)punctuationEntryObjectFromLocalObjects:(id)a0;
- (id)punctuationEntriesForGroupUUID:(id)a0;
- (void)removePunctuationGroup:(id)a0;
- (void)_updateCloudKitHelpers;
- (id)ruleToString:(long long)a0;
- (void)_managedObjectChanged:(id)a0;
- (id)punctuationGroupsForContexts;
- (BOOL)_saveIfPossible;
- (long long)stringToRule:(id)a0;
- (id)nextDefaultGroupName;
- (void)removeCloudRecordForPurge:(id)a0;
- (void)_initializeDatabaseStartup;
- (void)removeAllRecordsForPurge;
- (void)userAuthChanged;

@end
