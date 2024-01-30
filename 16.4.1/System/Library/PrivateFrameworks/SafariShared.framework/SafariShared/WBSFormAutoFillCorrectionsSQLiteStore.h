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
- (void)closeDatabase;
- (int)_migrateToSchemaVersion_3;
- (int)_migrateToSchemaVersion_2;
- (id)init;
- (int)_migrateToSchemaVersion_4;
- (void).cxx_destruct;
- (int)_createFreshLocalDatabaseSchema;
- (id)_classificationForFieldWithFingerprint:(id)a0 onDomain:(id)a1;
- (void)_configureDatabase:(id)a0 currentSchemaVersion:(int)a1;
- (int)_createFreshParsecDatabaseSchema;
- (BOOL)_isDatabaseOpen:(id)a0;
- (int)_migrateToCurrentSchemaVersionIfNeededForDatabase:(id)a0;
- (BOOL)_migrateToSchemaVersion:(int)a0 forDatabase:(id)a1;
- (id)_normalizeDomain:(id)a0;
- (void)_openDatabasesIfNeeded;
- (void)_openLocalDatabase;
- (void)_openParsecDatabase;
- (id)_parsecMetadataStringValueForKey:(id)a0;
- (BOOL)_removeAllLocalClassifications;
- (BOOL)_removeLocalClassificationsForDomain:(id)a0 recordedOnOrAfter:(id)a1;
- (BOOL)_replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)a0 retrievalURLString:(id)a1;
- (BOOL)_replaceDomainAllowListWithDomains:(id)a0 retrievalURLString:(id)a1;
- (int)_schemaVersionForDatabase:(id)a0;
- (BOOL)_setCrowdsourcedClassification:(id)a0 forFieldWithFingerprint:(id)a1 onDomain:(id)a2;
- (int)_setDatabaseSchemaVersion:(int)a0 forDatabase:(id)a1;
- (BOOL)_setDomain:(id)a0 isAllowListedForFeedback:(BOOL)a1;
- (void)_setLocalClassification:(id)a0 forFieldWithFingerprint:(id)a1 onDomain:(id)a2 date:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)_setLocalClassification:(id)a0 forFieldWithFingerprint:(id)a1 onDomain:(id)a2 dateReclassified:(id)a3;
- (BOOL)_setParsecMetadataStringValue:(id)a0 forKey:(id)a1;
- (BOOL)_tryToPerformTransactionOnDatabase:(id)a0 inBlock:(id /* block */)a1;
- (void)getAllowListStatusForDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)getClassificationForFieldWithFingerprint:(id)a0 onDomain:(id)a1 completionHandler:(id /* block */)a2;
- (void)getLastAllowListRetrievalURLStringWithCompletionHandler:(id /* block */)a0;
- (void)getLastCrowdsourcedCorrectionsRetrievalURLStringWithCompletionHandler:(id /* block */)a0;
- (id)initWithLocalDatabaseURL:(id)a0 parsecDatabaseURL:(id)a1;
- (void)removeAllLocalClassificationsWithCompletionHandler:(id /* block */)a0;
- (void)removeLocalClassificationsForDomain:(id)a0 recordedOnOrAfter:(id)a1 completionHandler:(id /* block */)a2;
- (void)replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)a0 retrievalURLString:(id)a1 completionHandler:(id /* block */)a2;
- (void)replaceDomainAllowListWithDomains:(id)a0 retrievalURLString:(id)a1 completionHandler:(id /* block */)a2;
- (void)setCrowdsourcedClassification:(id)a0 forFieldWithFingerprint:(id)a1 onDomain:(id)a2 completionHandler:(id /* block */)a3;
- (void)setDomain:(id)a0 isAllowListedForFeedback:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)setLastAllowListRetrievalURLString:(id)a0 completionHandler:(id /* block */)a1;
- (void)setLastCrowdsourcedCorrectionsRetrievalURLString:(id)a0 completionHandler:(id /* block */)a1;
- (void)setLocalClassification:(id)a0 forFieldWithFingerprint:(id)a1 onDomain:(id)a2 completionHandler:(id /* block */)a3;

@end
