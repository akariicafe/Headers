@class PFUbiquityLocation, NSString, NSSQLCore, PFUbiquitySwitchboardCacheWrapper, NSObject, NSPersistentStoreCoordinator, _PFUbiquityRecordsExporter, _PFUbiquityRecordsImporter, NSMutableSet, PFUbiquityRecordsImporterSchedulingContext, PFUbiquityBaselineHeuristics;
@protocol OS_dispatch_queue;

@interface PFUbiquitySwitchboardEntryMetadata : NSObject {
    NSString *_localPeerID;
    NSString *_storeName;
    PFUbiquityLocation *_localRootLocation;
    NSObject<OS_dispatch_queue> *_privateQueue;
}

@property (retain, nonatomic) PFUbiquitySwitchboardCacheWrapper *cacheWrapper;
@property (readonly, nonatomic) _PFUbiquityRecordsImporter *importer;
@property (readonly, nonatomic) _PFUbiquityRecordsExporter *exporter;
@property (retain, nonatomic) PFUbiquityLocation *ubiquityRootLocation;
@property (readonly, nonatomic) NSMutableSet *stores;
@property (readonly, nonatomic) NSString *activeModelVersionHash;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *privatePSC;
@property (readonly, nonatomic) NSSQLCore *privateStore;
@property (readonly, nonatomic) PFUbiquityRecordsImporterSchedulingContext *schedulingContext;
@property (nonatomic) BOOL useLocalStorage;
@property (nonatomic) BOOL useLocalAccount;
@property (readonly, nonatomic) PFUbiquityBaselineHeuristics *baselineHeuristics;

- (void)dealloc;
- (void)removePersistentStore:(id)a0;
- (void)addPersistentStore:(id)a0;
- (id)initWithLocalPeerID:(id)a0 ubiquityRootLocation:(id)a1 localRootLocation:(id)a2 storeName:(id)a3 andPrivateQueue:(id)a4;
- (void)tearDown;

@end
