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

+ (id)_defaultLocalDatabaseURL;
+ (id)standardStore;
+ (id)_defaultParsecDatabaseURL;

- (void)getClassificationForFieldWithFingerprint:(id)a0 onDomain:(id)a1 completionHandler:(id /* block */)a2;
- (void)setDomain:(id)a0 isAllowListedForFeedback:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithLocalDatabaseURL:(id)a0 parsecDatabaseURL:(id)a1;
- (void)getLastCrowdsourcedCorrectionsRetrievalURLStringWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void)replaceDomainAllowListWithDomains:(id)a0 retrievalURLString:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)_replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)a0 retrievalURLString:(id)a1;
- (int)_createFreshParsecDatabaseSchema;
- (int)_migrateToCurrentSchemaVersionIfNeededForDatabase:(id)a0;
- (BOOL)_removeAllLocalClassifications;
- (void)_openParsecDatabase;
- (void)_closeDatabases;
- (BOOL)_setParsecMetadataStringValue:(id)a0 forKey:(id)a1;
- (int)_createFreshLocalDatabaseSchema;
- (BOOL)_setLocalClassification:(id)a0 forFieldWithFingerprint:(id)a1 onDomain:(id)a2 dateReclassified:(id)a3;
- (id)_parsecMetadataStringValueForKey:(id)a0;
- (BOOL)_removeLocalClassificationsForDomain:(id)a0 recordedOnOrAfter:(id)a1;
- (void)_configureDatabase:(id)a0 currentSchemaVersion:(int)a1;
- (void)removeAllLocalClassificationsWithCompletionHandler:(id /* block */)a0;
- (void)replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)a0 retrievalURLString:(id)a1 completionHandler:(id /* block */)a2;
- (int)_migrateToSchemaVersion_3;
- (BOOL)_replaceDomainAllowListWithDomains:(id)a0 retrievalURLString:(id)a1;
- (id)_normalizeDomain:(id)a0;
- (void)setLastCrowdsourcedCorrectionsRetrievalURLString:(id)a0 completionHandler:(id /* block */)a1;
- (void)closeDatabase;
- (void)removeLocalClassificationsForDomain:(id)a0 recordedOnOrAfter:(id)a1 completionHandler:(id /* block */)a2;
- (int)_migrateToSchemaVersion_2;
- (void)getAllowListStatusForDomain:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_tryToPerformTransactionOnDatabase:(id)a0 inBlock:(id /* block */)a1;
- (void)setCrowdsourcedClassification:(id)a0 forFieldWithFingerprint:(id)a1 onDomain:(id)a2 completionHandler:(id /* block */)a3;
- (void)_openDatabasesIfNeeded;
- (BOOL)_isDatabaseOpen:(id)a0;
- (void)getLastAllowListRetrievalURLStringWithCompletionHandler:(id /* block */)a0;
- (void)_openLocalDatabase;
- (void)setLastAllowListRetrievalURLString:(id)a0 completionHandler:(id /* block */)a1;
- (int)_setDatabaseSchemaVersion:(int)a0 forDatabase:(id)a1;
- (int)_migrateToSchemaVersion_4;
- (void)setLocalClassification:(id)a0 forFieldWithFingerprint:(id)a1 onDomain:(id)a2 completionHandler:(id /* block */)a3;
- (void)_setLocalClassification:(id)a0 forFieldWithFingerprint:(id)a1 onDomain:(id)a2 date:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)_setCrowdsourcedClassification:(id)a0 forFieldWithFingerprint:(id)a1 onDomain:(id)a2;
- (BOOL)_migrateToSchemaVersion:(int)a0 forDatabase:(id)a1;
- (BOOL)_setDomain:(id)a0 isAllowListedForFeedback:(BOOL)a1;
- (int)_schemaVersionForDatabase:(id)a0;
- (id)_classificationForFieldWithFingerprint:(id)a0 onDomain:(id)a1;

@end
