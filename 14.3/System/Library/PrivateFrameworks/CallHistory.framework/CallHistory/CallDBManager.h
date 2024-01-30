@class DBManager;

@interface CallDBManager : NSObject

@property (retain) id deviceUnlockNotificationRef;
@property (retain, nonatomic) DBManager *dbManager;
@property BOOL deviceUnlocked;
@property unsigned char dataStoreType;
@property unsigned char notifyDataStoreChangeReason;

+ (id)modelURL;
+ (id)getDBLocationIsSandboxed:(BOOL)a0 isTemporary:(BOOL)a1 error:(unsigned char *)a2;
+ (id)dataStoreName;

- (void)handlePermanentCreated;
- (void)registerForNotifications;
- (id)init;
- (void).cxx_destruct;
- (id)createManagedObjectContext;
- (void)createPermanent;
- (void)dealloc;
- (id)tempDBLocation:(unsigned char *)a0;
- (id)permDBLocation:(unsigned char *)a0;
- (void)moveCallsFromTempDatabase;
- (void)createTemporary;
- (BOOL)notifyDataStoreChanged;
- (void)createDataStore;
- (void)handleTemporaryCreated;
- (BOOL)shouldCreatePermanent;
- (BOOL)shouldCreateTemporary;
- (void)reFetchState;

@end
