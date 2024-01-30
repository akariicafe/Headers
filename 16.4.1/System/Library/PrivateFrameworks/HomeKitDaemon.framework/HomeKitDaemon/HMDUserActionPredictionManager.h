@class HMBLocalZone, NSString, HMDDatabaseZoneManager, NSObject;
@protocol OS_dispatch_queue;

@interface HMDUserActionPredictionManager : HMFObject <HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) HMBLocalZone *localZone;
@property (readonly) HMDDatabaseZoneManager *zoneManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configure;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)_removeZones;
- (id)initWithZoneManager:(id)a0 workQueue:(id)a1;
- (BOOL)manager:(id)a0 shouldShareWithUser:(id)a1;
- (void)removeZones;
- (void)zoneManagerDidStart:(id)a0;
- (void)zoneManagerDidStop:(id)a0;

@end
