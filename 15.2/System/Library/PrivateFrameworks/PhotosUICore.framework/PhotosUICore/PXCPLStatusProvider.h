@class PLPhotoLibrary, NSString, PXCloudQuotaPremiumOfferProvider, PXCPLStatus, PXFetchResultCountObserver, PXCPLSyncActivity, NSObject, CPLStatus, NSProgress, PXCloudQuotaOfferProvider, PHPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PXCPLStatusProvider : PXObservable <CPLStatusDelegate, PXFetchResultCountObserverDelegate, PXChangeObserver, PXCPLStatusProvider> {
    NSObject<OS_dispatch_queue> *_serialUpdateQueue;
    CPLStatus *_cplStatus;
    PXCPLSyncActivity *_syncActivity;
    unsigned long long _syncProgressState;
    id _syncProgressSubscriber;
    NSProgress *_syncProgress;
    PXFetchResultCountObserver *_numberOfReferencedItemsObserver;
    unsigned long long _numberOfReferencedItems;
    PXCloudQuotaOfferProvider *_offerProvider;
    PXCloudQuotaPremiumOfferProvider *_premiumOfferProvider;
    BOOL _hasCloudQuotaOffer;
    BOOL _cloudQuotaOfferHasAssetCounts;
    PHPhotoLibrary *_ph_photoLibrary;
    PLPhotoLibrary *_pl_photoLibrary;
    unsigned long long _needsUpdate;
    double _lastUpdate;
    BOOL _isUpdating;
}

@property (class, readonly) PXCPLStatusProvider *currentStatusProvider;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXCPLStatus *status;

- (id)_initWithInitialUpdateType:(unsigned long long)a0 isSynchronous:(BOOL)a1;
- (void)fetchResultCountObserver:(id)a0 didChangeFetchResultCount:(long long)a1;
- (void)_performUpdate;
- (double)nextOverrideResumeTimeInterval;
- (void)statusDidChange:(id)a0;
- (void)_scheduleUpdateForType:(unsigned long long)a0;
- (id)_initWithInitialSynchronousUpdateType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)_schedulePendingUpdates;
- (id)_updateStatus:(id)a0 requestedTypes:(unsigned long long)a1;
- (void)_setStatus:(id)a0 producedForUpdateType:(unsigned long long)a1;

@end
