@class NSString, WBSSQLiteDatabase, NSURL, WBSCrowdsourcedFeedbackDomainNormalizer, NSObject;
@protocol OS_dispatch_queue;

@interface WBSFormAutoFillCorrectionsSQLiteStore : NSObject <WBSFormAutoFillCorrectionsStore, WBSCrowdsourcedFeedbackAllowList> {
    NSURL *_localDatabaseURL;
    NSURL *_parsecDatabaseURL;
    WBSSQLiteDatabase *_localDatabase;
    WBSSQLiteDatabase *_parsecDatabase;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSCrowdsourcedFeedbackDomainNormalizer *_domainNormalizer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)standardStore;
+ (id)_defaultLocalDatabaseURL;
+ (id)_defaultParsecDatabaseURL;

- (void)_closeDatabases;
- (int)_migrateToSchemaVersion_4;
- (BOOL)_setParsecMetadataStringValue:(id)a0 forKey:(id)a1;
- (int)_setDatabaseSchemaVersion:(int)a0 forDatabase:(id)a1;
- (void)_configureDatabase:(id)a0 currentSchemaVersion:(int)a1;
- (void)_openDatabasesIfNeeded;
- (void)setCrowdsourcedClassification:(id)a0 forFieldWithFingerprint:(id)a1 onDomain:(id)a2 completionHandler:(id /* block */)a3;
- (void)setLocalClassification:(id)a0 forFieldWithFingerprint:(id)a1 onDomain:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)_isDatabaseOpen:(id)a0;
- (void)setDomain:(id)a0 isAllowListedForFeedback:(BOOL)a1 completionHandler:(id /* block */)a2;
- (int)_migrateToSchemaVersion_3;
- (void)replaceDomainAllowListWithDomains:(id)a0 retrievalURLString:(id)a1 completionHandler:(id /* block */)a2;
- (int)_migrateToCurrentSchemaVersionIfNeededForDatabase:(id)a0;
- (void)removeAllLocalClassificationsWithCompletionHandler:(id /* block */)a0;
- (void)getLastAllowListRetrievalURLStringWithCompletionHandler:(id /* block */)a0;
- (BOOL)_setCrowdsourcedClassification:(id)a0 forFieldWithFingerprint:(id)a1 onDomain:(id)a2;
- (BOOL)_removeAllLocalClassifications;
- (id)_parsecMetadataStringValueForKey:(id)a0;
- (void)setLastCrowdsourcedCorrectionsRetrievalURLString:(id)a0 completionHandler:(id /* block */)a1;
- (id)_classificationForFieldWithFingerprint:(id)a0 onDomain:(id)a1;
- (void)setLastAllowListRetrievalURLString:(id)a0 completionHandler:(id /* block */)a1;
- (void)getAllowListStatusForDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)a0 retrievalURLString:(id)a1 completionHandler:(id /* block */)a2;
- (int)_createFreshParsecDatabaseSchema;
- (BOOL)_tryToPerformTransactionOnDatabase:(id)a0 inBlock:(id /* block */)a1;
- (int)_createFreshLocalDatabaseSchema;
- (id)initWithLocalDatabaseURL:(id)a0 parsecDatabaseURL:(id)a1;
- (void)removeLocalClassificationsForDomain:(id)a0 recordedOnOrAfter:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)_setLocalClassification:(id)a0 forFieldWithFingerprint:(id)a1 onDomain:(id)a2 dateReclassified:(id)a3;
- (id)init;
- (void)_openParsecDatabase;
- (BOOL)_replaceDomainAllowListWithDomains:(id)a0 retrievalURLString:(id)a1;
- (void)getClassificationForFieldWithFingerprint:(id)a0 onDomain:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_migrateToSchemaVersion:(int)a0 forDatabase:(id)a1;
- (void)closeDatabase;
- (id)_normalizeDomain:(id)a0;
- (int)_schemaVersionForDatabase:(id)a0;
- (BOOL)_setDomain:(id)a0 isAllowListedForFeedback:(BOOL)a1;
- (void)getLastCrowdsourcedCorrectionsRetrievalURLStringWithCompletionHandler:(id /* block */)a0;
- (int)_migrateToSchemaVersion_2;
- (BOOL)_replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)a0 retrievalURLString:(id)a1;
- (void)_openLocalDatabase;
- (BOOL)_removeLocalClassificationsForDomain:(id)a0 recordedOnOrAfter:(id)a1;
- (void)_setLocalClassification:(id)a0 forFieldWithFingerprint:(id)a1 onDomain:(id)a2 date:(id)a3 completionHandler:(id /* block */)a4;

@end
