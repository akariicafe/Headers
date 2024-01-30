@class NSMapTable, NSString, ICCameraDevice, NSArray, NSMutableDictionary, NSMutableSet, NSProgress, ICCameraDeviceRemovedItemsCoalescer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PHImportDeviceSource : PHImportSource <ICCameraDeviceDelegate> {
    NSMutableArray *_assetThumbnailRequests;
    BOOL _waitingForAssetThumbnailRequest;
    NSMutableArray *_assetMetadataRequests;
    BOOL _waitingForAssetMetadataRequest;
    NSMutableArray *_assetThumbnailHighPriorityRequests;
    NSMapTable *_assetDataRequestsByCameraItem;
    NSObject<OS_dispatch_queue> *_assetDataRequestQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *deleteEjectQueue;
@property (retain, nonatomic) ICCameraDeviceRemovedItemsCoalescer *removalCoalescer;
@property (retain, nonatomic) NSMutableSet *removedCameraFiles;
@property (nonatomic) BOOL isEjecting;
@property (nonatomic) BOOL ejectAfterDelete;
@property (retain, nonatomic) NSMutableDictionary *assetByCameraFile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetByCameraFileAccess;
@property (retain, nonatomic) NSProgress *deleteProgress;
@property (retain, nonatomic) NSArray *avchdAssets;
@property (retain) ICCameraDevice *camera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0;
- (BOOL)canReference;
- (id)path;
- (void)eject;
- (void).cxx_destruct;
- (BOOL)isAvailable;
- (BOOL)isAppleDevice;
- (struct CGImage { } *)icon;
- (id)uuid;
- (void)beginWork;
- (id)volumePath;
- (id)productKind;
- (id)name;
- (id)assetsByProcessingItem:(id)a0;
- (BOOL)isDeleting;
- (void)deviceDidBecomeReady:(id)a0;
- (void)cameraDevice:(id)a0 didAddItems:(id)a1;
- (void)cameraDevice:(id)a0 didRemoveItems:(id)a1;
- (void)cameraDevice:(id)a0 didReceiveThumbnail:(struct CGImage { } *)a1 forItem:(id)a2 error:(id)a3;
- (void)cameraDevice:(id)a0 didReceiveMetadata:(id)a1 forItem:(id)a2 error:(id)a3;
- (void)cameraDevice:(id)a0 didRenameItems:(id)a1;
- (void)cameraDeviceDidChangeCapability:(id)a0;
- (void)cameraDevice:(id)a0 didReceivePTPEvent:(id)a1;
- (void)deviceDidBecomeReadyWithCompleteContentCatalog:(id)a0;
- (void)cameraDeviceDidRemoveAccessRestriction:(id)a0;
- (void)cameraDeviceDidEnableAccessRestriction:(id)a0;
- (void)device:(id)a0 didEncounterError:(id)a1;
- (void)didRemoveDevice:(id)a0;
- (void)device:(id)a0 didCloseSessionWithError:(id)a1;
- (void)device:(id)a0 didOpenSessionWithError:(id)a1;
- (void)fetchThumbnailDataUsingRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)sendNextThumbnailRequest;
- (void)sendNextMetadataRequest;
- (void)fetchMetadataUsingRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchMetadataForRequest:(id)a0 importAsset:(id)a1 completion:(id /* block */)a2;
- (void)cameraDevice:(id)a0 setAccessState:(unsigned char)a1;
- (id)importAssetForCameraFile:(id)a0 create:(BOOL)a1;
- (void)removeAssetForCameraFile:(id)a0;
- (BOOL)canAutolaunch;
- (id)deleteImportAssets:(id)a0 isConfirmed:(BOOL)a1 atEnd:(id /* block */)a2;
- (id)cameraFilesForAssets:(id)a0;
- (BOOL)canDeleteContent;
- (BOOL)isConnectedDevice;
- (void)deviceFinishedEnumeratingItems:(id)a0;

@end
