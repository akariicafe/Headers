@class NSURLSession, HMFTimer, NSDictionary, NSURL, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDVendorDataManager : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSURLSession *urlSession;
@property (readonly, nonatomic) HMFTimer *fetchTimer;
@property (readonly, nonatomic) NSURL *urlForBundledPlist;
@property (readonly, nonatomic) NSURL *urlForBundledInternalPlist;
@property (nonatomic) long long dataVersion;
@property (retain, nonatomic) NSDictionary *collectionsByManufacturer;
@property (retain, nonatomic) NSDictionary *entriesByProductData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dbURL;
+ (id)logCategory;
+ (id)sharedVendorDataManager;

- (void)timerDidFire:(id)a0;
- (void)_start;
- (id)initWithDefaults;
- (void).cxx_destruct;
- (id)init;
- (id)vendorModelEntryForProductData:(id)a0;
- (id)vendorModelEntryForManufacturer:(id)a0 model:(id)a1;
- (void)_handleServerResponse:(id)a0 withData:(id)a1 error:(id)a2;
- (id)initWithWorkQueue:(id)a0 urlSession:(id)a1 fetchTimer:(id)a2;
- (BOOL)_loadDatabaseFromDictionary:(id)a0;
- (BOOL)_loadDatabaseFromFileURL:(id)a0 fileDescription:(id)a1;
- (BOOL)_loadDatabaseFromFilePath:(id)a0 fileDescription:(id)a1;
- (void)_loadDatabaseFromLocalFiles;
- (void)_fetchDataFromServer;
- (void)_handleDataFromServer:(id)a0;
- (BOOL)_parseDatabaseFromDictionary:(id)a0 dataVersion:(long long *)a1 collectionsByManufacturer:(id *)a2 entriesByProductData:(id *)a3;
- (id)_modelsStringForManufacturer:(id)a0 model:(id)a1 dictionary:(id)a2 key:(id)a3;
- (id)_parseVendorModelEntryForManufacturer:(id)a0 model:(id)a1 dictionary:(id)a2;
- (BOOL)_parseManufacturersList:(id)a0 collectionsByManufacturer:(id *)a1 entriesByProductData:(id *)a2;

@end
