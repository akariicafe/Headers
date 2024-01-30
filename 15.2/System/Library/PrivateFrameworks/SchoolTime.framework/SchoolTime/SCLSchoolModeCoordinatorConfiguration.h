@class NRDevice, IDSDevice, NSObject, NSURL, SCLUnlockHistoryPersistentStore, SCLSchoolModeServer, SCLTransportController;
@protocol OS_dispatch_queue;

@interface SCLSchoolModeCoordinatorConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) NRDevice *NRDevice;
@property (retain, nonatomic) IDSDevice *idsDevice;
@property (retain, nonatomic) SCLTransportController *transportController;
@property (retain, nonatomic) SCLSchoolModeServer *server;
@property (retain, nonatomic) SCLUnlockHistoryPersistentStore *historyStore;
@property (retain, nonatomic) NSURL *directoryURL;
@property (nonatomic) BOOL sendsRemoteScheduleSettings;
@property (nonatomic) BOOL sendsRemoteHistoryItems;
@property (nonatomic, getter=isManuallyManagedOnly) BOOL manuallyManagedOnly;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
