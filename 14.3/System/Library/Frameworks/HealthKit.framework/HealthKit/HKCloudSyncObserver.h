@class NSString, NSUUID, HKTaskServerProxyProvider, HKCloudSyncObserverStatus, NSProgress;
@protocol HKCloudSyncObserverDelegate;

@interface HKCloudSyncObserver : NSObject <_HKXPCExportable, HKCloudSyncObserverClientInterface> {
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    NSProgress *_progress;
    HKCloudSyncObserverStatus *_status;
    id<HKCloudSyncObserverDelegate> _delegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<HKCloudSyncObserverDelegate> delegate;
@property (readonly, copy, nonatomic) HKCloudSyncObserverStatus *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)setStatus:(id)a0;
- (id)remoteInterface;
- (void)setProgress:(id)a0;
- (id)progress;
- (id)exportedInterface;
- (void)_clientQueue_didCompleteSyncWithStatus:(long long)a0 error:(id)a1;
- (void)clientRemote_syncDidStart;
- (void)clientRemote_didUpdateObserverWithSyncStatus:(id)a0;
- (id)initWithHealthStore:(id)a0 delegate:(id)a1;
- (void)startObservingSyncStatus;
- (void)startSyncIfRestoreNotCompleted;

@end
