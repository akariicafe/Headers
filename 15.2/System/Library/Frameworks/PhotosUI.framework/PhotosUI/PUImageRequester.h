@class PUImageRequesterChange, PUMediaProvider, NSArray, UIImage, NSData, NSURL, NSHashTable;
@protocol PUDisplayAsset;

@interface PUImageRequester : NSObject

@property (retain, nonatomic, setter=_setImage:) UIImage *image;
@property (retain, nonatomic, setter=_setFullsizeImageData:) NSData *fullsizeImageData;
@property (retain, nonatomic, setter=_setFullsizeImageURL:) NSURL *fullsizeImageURL;
@property (nonatomic, setter=_setImageIsPlaceholder:) BOOL imageIsPlaceholder;
@property (nonatomic, setter=_setImageIsFullQuality:) BOOL imageIsFullQuality;
@property (retain, nonatomic, setter=_setGainMapImage:) struct CGImage { } *gainMapImage;
@property (nonatomic, setter=_setGainMapValue:) float gainMapValue;
@property (retain, nonatomic, setter=_setObserver:) NSHashTable *_observers;
@property (nonatomic, setter=_setChangeCount:) long long _changeCount;
@property (retain, nonatomic, setter=_setCurrentChange:) PUImageRequesterChange *_currentChange;
@property (nonatomic, setter=_setNeedsUpdate:) BOOL _needsUpdate;
@property (nonatomic, setter=_setHasRequestedFullsizeImageData:) BOOL _hasRequestedFullsizeImageData;
@property (nonatomic, setter=_setCurrentFullsizeImageDataRequestID:) int _currentFullsizeImageDataRequestID;
@property (nonatomic, setter=_setCurrentIncompleteRequest:) BOOL _hasCurrentIncompleteRequest;
@property (nonatomic, setter=_setLastRequestedImageSize:) struct CGSize { double width; double height; } _lastRequestedImageSize;
@property (nonatomic, setter=_setCurrentImageRequestID:) int _currentImageRequestID;
@property (nonatomic, setter=_setShouldUpdateImageOnCurrentRequestCompletion:) BOOL _shouldUpdateImageOnCurrentRequestCompletion;
@property (readonly, nonatomic) PUMediaProvider *mediaProvider;
@property (readonly, nonatomic) id<PUDisplayAsset> asset;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) BOOL shouldRequestPenultimateVersion;
@property (nonatomic) BOOL useLowMemoryMode;
@property (retain, nonatomic) NSArray *requestFullSizeImageDataUTTypes;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (readonly, nonatomic) BOOL requiresFullQualityImage;
@property (nonatomic) BOOL highPriorityRequest;
@property (nonatomic) BOOL includeGainMap;

- (void)updateIfNeeded;
- (id)initWithMediaProvider:(id)a0 asset:(id)a1 requiresFullQualityImage:(BOOL)a2;
- (void)performChanges:(id /* block */)a0;
- (void)registerObserver:(id)a0;
- (void)handlePreloadedImage:(id)a0;
- (void)cancelAllImageRequests;
- (void)setAsset:(id)a0;
- (void)_publishChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_didChange;
- (void)_willChange;
- (void)unregisterObserver:(id)a0;
- (void)_update;
- (void)_handleResultOfImageRequestWithID:(int)a0 image:(id)a1 info:(id)a2;
- (void)dealloc;
- (void)_invalidateImageRequest;
- (void)_assertInsideChangesBlock;
- (void)_handleResultOfFullsizeImageDataRequestWithID:(int)a0 imageData:(id)a1 imageURL:(id)a2 dataUTI:(id)a3 orientation:(long long)a4 info:(id)a5;

@end
