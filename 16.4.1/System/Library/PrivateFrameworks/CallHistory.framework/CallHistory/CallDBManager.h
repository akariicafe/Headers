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

+ (id)dataStoreName;
+ (id)modelURL;
+ (id)getDBLocationIsSandboxed:(BOOL)a0 isTemporary:(BOOL)a1 error:(unsigned char *)a2;

- (void)handleTemporaryCreated;
- (void)createTemporary;
- (id)tempDBLocation:(unsigned char *)a0;
- (void)didChangeBootLockEnabledForDeviceObserver:(id)a0;
- (id)createManagedObjectContext;
- (void)createDataStore;
- (void)moveCallsFromTempDatabase;
- (void)createPermanent;
- (BOOL)shouldCreateTemporary;
- (id)permDBLocation:(unsigned char *)a0;
- (id)init;
- (BOOL)notifyDataStoreChanged;
- (void)handlePermanentCreated;
- (BOOL)shouldCreatePermanent;
- (void).cxx_destruct;

@end
