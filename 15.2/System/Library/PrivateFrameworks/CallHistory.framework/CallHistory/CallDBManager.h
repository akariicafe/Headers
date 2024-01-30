@class CHDeviceObserver, DBManager, NSString;

@interface CallDBManager : NSObject <CHDeviceObserverDelegate>

@property (retain, nonatomic) CHDeviceObserver *deviceObserver;
@property (retain, nonatomic) DBManager *dbManager;
@property BOOL deviceUnlocked;
@property unsigned char dataStoreType;
@property unsigned char notifyDataStoreChangeReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelURL;
+ (id)getDBLocationIsSandboxed:(BOOL)a0 isTemporary:(BOOL)a1 error:(unsigned char *)a2;
+ (id)dataStoreName;

- (void)createPermanent;
- (void)handlePermanentCreated;
- (void)createTemporary;
- (id)permDBLocation:(unsigned char *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)moveCallsFromTempDatabase;
- (id)tempDBLocation:(unsigned char *)a0;
- (id)createManagedObjectContext;
- (BOOL)notifyDataStoreChanged;
- (void)createDataStore;
- (void)handleTemporaryCreated;
- (BOOL)shouldCreatePermanent;
- (BOOL)shouldCreateTemporary;
- (void)didChangeBootLockEnabledForDeviceObserver:(id)a0;

@end
