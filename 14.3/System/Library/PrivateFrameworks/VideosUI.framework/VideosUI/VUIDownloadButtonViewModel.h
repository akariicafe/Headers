@class NSString, VUIVideosPlayable, NSArray, NSDate, NSObject, VUIMediaEntity;
@protocol VUIMediaEntityAssetController;

@interface VUIDownloadButtonViewModel : NSObject <VUIMediaEntityAssetControllerDelegate>

@property (nonatomic) unsigned long long downloadState;
@property (retain, nonatomic) NSString *downloadStateStringValue;
@property (nonatomic) double downloadProgress;
@property (retain, nonatomic) VUIVideosPlayable *videosPlayable;
@property (retain, nonatomic) NSArray *downloadStateToString;
@property (nonatomic) BOOL renewsOfflineKeysAutomatically;
@property (retain, nonatomic) NSDate *downloadExpirationDate;
@property (retain, nonatomic) NSDate *availabilityEndDate;
@property (retain, nonatomic) VUIMediaEntity *mediaEntity;
@property (retain, nonatomic) NSObject<VUIMediaEntityAssetController> *assetController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchNewKeysForDownloadedVideo;
- (void)mediaEntityAssetController:(id)a0 stateDidChange:(id)a1;
- (void)pauseDownload;
- (void)resumeDownload;
- (id)initWithVideosPlayable:(id)a0;
- (id)initWithAssetController:(id)a0;
- (void)stopDownload;
- (void)deleteDownload;
- (void)startDownloadAllowingCellular:(BOOL)a0 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a1 quality:(long long)a2;
- (void)preflightPresentingViewController:(id)a0 completion:(id /* block */)a1;
- (void)_getAssetControllerCreatingMediaItem:(BOOL)a0 completion:(id /* block */)a1;
- (id)_createDownloadStateToStringArrayMap;
- (void)_updateDownloadStateFromAssetControllerState:(id)a0;
- (unsigned long long)_downloadStateFromAssetsControllerStatus:(unsigned long long)a0;

@end
