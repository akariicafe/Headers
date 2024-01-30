@class NSString, PHAssetCollection, NSObject;
@protocol OS_dispatch_queue, PXPhotosGridOptionsControllerDelegate;

@interface PXPhotosGridSharedAlbumOptionsController : NSObject <PLInvitationRecordsObserver, PXPhotosGridOptionsController> {
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _hasRegistered;
}

@property (copy, nonatomic) NSString *actionPerformerType;
@property (copy, nonatomic) NSString *systemIconImageName;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (weak, nonatomic) id<PXPhotosGridOptionsControllerDelegate> optionsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invitationRecordsDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAssetCollection:(id)a0;
- (void)dealloc;
- (void)_updateOptions;
- (void)preloadOptions;
- (void)_workQueue_updateOptions;

@end
