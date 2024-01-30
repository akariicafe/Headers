@class NSString, PXAssetCountObserver, PXCPLStatus, PXCPLSyncActivity, NSObject, CPLStatus, PXCloudQuotaOfferProvider, PHPhotoLibrary, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PXCPLStatusProvider : PXObservable <CPLStatusDelegate, PXAssetCountObserverDelegate, PXChangeObserver, PXCPLStatusProvider> {
    NSObject<OS_dispatch_queue> *_serialUpdateQueue;
    CPLStatus *_cplStatus;
    PXCPLSyncActivity *_syncActivity;
    PXAssetCountObserver *_numberOfReferencedItemsObserver;
    unsigned long long _numberOfReferencedItems;
    PXCloudQuotaOfferProvider *_offerProvider;
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

- (id)_initWithInitialSynchronousUpdateType:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_schedulePendingUpdates;
- (void)assetCountObserver:(id)a0 didChangeNumberOfAssets:(long long)a1;
- (id)_initWithInitialUpdateType:(unsigned long long)a0 isSynchronous:(BOOL)a1;
- (void)_setStatus:(id)a0 producedForUpdateType:(unsigned long long)a1;
- (id)_updateStatus:(id)a0 requestedTypes:(unsigned long long)a1;
- (void)_scheduleUpdateForType:(unsigned long long)a0;
- (void)_powerStateDidChange:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)statusDidChange:(id)a0;
- (void)_performUpdate;

@end
