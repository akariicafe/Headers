@class NSNotificationCenter;
@protocol AVTBlockScheduler, AVTCoreDataCloudKitMirroringHandlerDelegate, NSObject, AVTUILogger;

@interface AVTCoreDataCloudKitMirroringHandler : NSObject <AVTCoreDataCloudKitMirroringHandler>

@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) id<AVTBlockScheduler> blockScheduler;
@property (retain, nonatomic) id<NSObject> willResetNotificationToken;
@property (retain, nonatomic) id<NSObject> didResetNotificationToken;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (nonatomic) BOOL exportInFlight;
@property (weak, nonatomic) id<AVTCoreDataCloudKitMirroringHandlerDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)willResetSync:(id)a0;
- (void)didResetSync:(id)a0;
- (void)exportChangesWithManagedObjectContext:(id)a0 discretionary:(BOOL)a1 workQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)startObservingResetSyncWithNotificationCenter:(id)a0;
- (void)scheduleExportChangesWithManagedObjectContext:(id)a0 discretionary:(BOOL)a1 workQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)importChangesWithManagedObjectContext:(id)a0 discretionary:(BOOL)a1 workQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)resetZoneWithManagedObjectContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithLogger:(id)a0 blockScheduler:(id)a1;

@end
