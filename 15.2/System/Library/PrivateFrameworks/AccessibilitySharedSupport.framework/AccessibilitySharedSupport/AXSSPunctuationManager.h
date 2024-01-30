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

- (id)nextDefaultGroupName;
- (void)updateEntry:(id)a0;
- (id)cloudRecordsToPurge:(id)a0;
- (void)_initializeCloudKitHelpers;
- (id)_punctuationGroupForEntry:(id)a0;
- (void)updatePunctuationGroup:(id)a0 fromCloudKit:(BOOL)a1;
- (long long)stringToRule:(id)a0;
- (id)punctuationEntryForUUID:(id)a0;
- (id)_punctuationGroupFromManagedObject:(id)a0;
- (void)addCloudRecordToPurge:(id)a0 recordEntityType:(id)a1;
- (id)punctuationEntryObjectFromLocalObjects:(id)a0;
- (id)nonePunctuationGroup;
- (id)mostBasePunctuationGroupForGroup:(id)a0;
- (void)importPunctuationGroup:(id)a0;
- (id)somePunctuationGroup;
- (void)_initializeDatabaseStartup;
- (id)_punctuationEntryFromManagedObject:(id)a0;
- (id)punctuationGroupsForContexts;
- (id)punctuationGroupForUUID:(id)a0;
- (void)removeEntry:(id)a0;
- (id)parentPunctuationGroup:(id)a0;
- (void).cxx_destruct;
- (void)_filterAutoswitchContexts:(id)a0 punctuationGroupsForContexts:(id)a1;
- (id)_databaseFilePath;
- (id)ruleToString:(long long)a0;
- (id)init;
- (void)removeCloudRecordForPurge:(id)a0;
- (void)_setupDatabase;
- (void)_updateCloudKitHelpers;
- (void)updatePunctuationGroup:(id)a0;
- (void)updateEntry:(id)a0 fromCloudKit:(BOOL)a1;
- (void)_cloudKitUpdated:(id)a0;
- (void)userAuthChanged;
- (id)allPunctuationGroup;
- (void)_initializeSystemGroups;
- (BOOL)isBasePunctuationGroup:(id)a0;
- (void)removeAllRecordsForPurge;
- (id)punctuationEntriesForGroupUUID:(id)a0;
- (id)_databaseDirectoryPath;
- (void)_managedObjectChanged:(id)a0;
- (BOOL)_saveIfPossible;
- (void)removePunctuationGroup:(id)a0;
- (BOOL)isProtectedDataAvailable;

@end
