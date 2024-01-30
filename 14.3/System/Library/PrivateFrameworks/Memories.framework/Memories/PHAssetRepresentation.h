@class NSString, PHAsset, NSDate, PHAssetResource;

@interface PHAssetRepresentation : NSObject {
    BOOL _isAvailable;
}

@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) NSString *localIdentifier;
@property (retain, nonatomic) NSDate *modificationDate;
@property (nonatomic) long long mediaType;
@property (nonatomic) unsigned long long lastKnownPersistenceState;
@property (nonatomic) unsigned long long downloadState;
@property (nonatomic) double downloadProgress;
@property (retain, nonatomic) NSDate *downloadRequestDate;
@property (nonatomic, getter=isAdjustedVersion) BOOL adjustedVersion;
@property (readonly) PHAssetResource *mostUsefulResource;
@property (readonly, nonatomic) NSString *derivativeFilePath;

+ (void)initialize;
+ (void)clearStaticCache;
+ (id)assetRepresentationWithAsset:(id)a0 adjustedVersion:(BOOL)a1;
+ (id)assetRepresentationWithIdentifierURL:(id)a0;
+ (void)createStaticCache;
+ (id)_cachedAssetRepresentationWithIdentifier:(id)a0 adjustedVersion:(BOOL)a1;
+ (void)_cacheAssetRepresentation:(id)a0;
+ (id)assetRepresentationWithPhotosIdentifierURL:(id)a0;
+ (id)assetRepresentationWithAssetsLibraryPersistentURL:(id)a0;

- (id)imageData;
- (struct CGSize { double x0; double x1; })imageSize;
- (id)thumbnailImage;
- (id)privateFileURL;
- (id)avAsset;
- (void).cxx_destruct;
- (BOOL)isHEIF;
- (void)dealloc;
- (BOOL)isDownloading;
- (unsigned long long)hash;
- (id)description;
- (id)imageWithSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isEqual:(id)a0;
- (id)image;
- (id)identifierURL;
- (struct CGImage { } *)cgimageWithSize:(struct CGSize { double x0; double x1; })a0;
- (int)requestVideoWithResultHandler:(id /* block */)a0;
- (int)requestPlayerItemWithResultHandler:(id /* block */)a0 progressHandler:(id /* block */)a1 networkAccessAllowed:(BOOL)a2;
- (id)privateFileURLForResource:(id)a0;
- (id)initWithAsset:(id)a0 adjustedVersion:(BOOL)a1;
- (id)initWithLocalIdentifier:(id)a0 adjustedVersion:(BOOL)a1 modificationDate:(id)a2 mediaType:(long long)a3;
- (id)initWithAsset:(id)a0 localIdentifier:(id)a1 adjustedVersion:(BOOL)a2 modificationDate:(id)a3 mediaType:(long long)a4;
- (int)requestThumbnailWithResultHandler:(id /* block */)a0 synchronous:(BOOL)a1 networkAccessAllowed:(BOOL)a2;
- (int)requestImageDataWithResultHandler:(id /* block */)a0 synchronous:(BOOL)a1;
- (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 imageManager:(id)a1;
- (struct CGImage { } *)cgimageWithSize:(struct CGSize { double x0; double x1; })a0 imageManager:(id)a1;
- (int)requestImageDataWithResultHandler:(id /* block */)a0 progressHandler:(id /* block */)a1 synchronous:(BOOL)a2;
- (int)requestVideoWithResultHandler:(id /* block */)a0 progressHandler:(id /* block */)a1;
- (int)requestVideoWithResultHandler:(id /* block */)a0 progressHandler:(id /* block */)a1 imageManager:(id)a2;
- (id)privateVideoFileURL;
- (id)handleVideoRequestCompletionWithResult:(id)a0 info:(id)a1 videoRequestOptions:(id)a2;
- (int)requestImageWithResultHandler:(id /* block */)a0 progressHandler:(id /* block */)a1 imageManager:(id)a2;
- (BOOL)isDerivativeFilePathPointingToJPEGorRAWorHEIFFile;
- (void)queryLastKnownPersistenceState;
- (unsigned long long)estimatedFileSize;
- (int)requestMediaWithResultHandler:(id /* block */)a0 progressHandler:(id /* block */)a1;
- (int)requestExportSessionWithResultHandler:(id /* block */)a0 progressHandler:(id /* block */)a1;
- (int)requestImageDataWithResultHandler:(id /* block */)a0;
- (int)requestImageWithResultHandler:(id /* block */)a0;
- (int)requestImageWithResultHandler:(id /* block */)a0 progressHandler:(id /* block */)a1;
- (id)handlePlayerItemRequestCompletionWithResult:(id)a0 info:(id)a1 videoRequestOptions:(id)a2;
- (id)handleRequestCompletionWithResult:(id)a0 info:(id)a1 videoRequestOptions:(id)a2;

@end
