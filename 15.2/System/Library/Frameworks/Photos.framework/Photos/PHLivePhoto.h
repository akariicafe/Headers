@class PHImageManager, NSString, NSURL, NSArray, PHAsset, PHSandboxExtensionWrapper, NSObject, AVVideoComposition, NSNumber, AVAsset;

@interface PHLivePhoto : NSObject <NSItemProviderReading, NSCopying, NSSecureCoding> {
    PHAsset *_asset;
    NSObject *_plImage;
}

@property (class, readonly, copy, nonatomic) NSArray *readableTypeIdentifiersForItemProvider;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *assetUUID;
@property (readonly, nonatomic) AVAsset *videoAsset;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } photoTime;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) AVVideoComposition *videoComposition;
@property (readonly, nonatomic) NSNumber *srlCompensationValue;
@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, copy, nonatomic) NSString *assetLocalIdentifier;
@property (readonly) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) PHSandboxExtensionWrapper *imageURLSandboxExtensionWrapper;
@property (readonly, nonatomic) NSURL *videoURL;
@property (readonly, nonatomic) PHSandboxExtensionWrapper *videoURLSandboxExtensionWrapper;
@property (readonly, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) NSString *imageTypeIdentifier;
@property (readonly, nonatomic) NSString *videoTypeIdentifier;
@property (readonly, copy, nonatomic) id /* block */ imageFileLoader;
@property (readonly, copy, nonatomic) id /* block */ videoFileLoader;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) long long contentMode;
@property (nonatomic) float audioVolume;
@property (nonatomic) BOOL skipInstantiatingImageAndAVAsset;
@property (weak, nonatomic) PHImageManager *imageManager;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (id)livePhotoWithResourceFileURLs:(id)a0 error:(id *)a1;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })_photoTimeForLivePhotoWithImageURL:(id)a0 videoURL:(id)a1;
+ (int)requestLivePhotoWithResourceFileURLs:(id)a0 placeholderImage:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 contentMode:(long long)a3 resultHandler:(id /* block */)a4;
+ (void)cancelLivePhotoRequestWithRequestID:(int)a0;
+ (id)loopingLivePhotoWithResourceFileURLs:(id)a0 skipInstantiatingImageAndAVAsset:(BOOL)a1 error:(id *)a2;
+ (id)livePhotoWithResourceFileURLs:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 skipInstantiatingImageAndAVAsset:(BOOL)a3 error:(id *)a4;
+ (id)livePhotoWithResourceFileURLs:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 skipValidation:(BOOL)a3 error:(id *)a4;
+ (id)livePhotoWithResourceFileURLs:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 skipValidation:(BOOL)a3 isLooping:(BOOL)a4 skipInstantiatingImageAndAVAsset:(BOOL)a5 error:(id *)a6;
+ (BOOL)_identifyResourceURLs:(id)a0 outImageURL:(id *)a1 outVideoURL:(id *)a2 error:(id *)a3;
+ (BOOL)_canCreateLivePhotoWithURLs:(id)a0 outError:(id *)a1;
+ (BOOL)_canCreateLoopingLivePhotoWithURLs:(id)a0 outError:(id *)a1;
+ (BOOL)_validateFileURLs:(id)a0 withValidationOptions:(unsigned long long)a1 outError:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (BOOL)hasPhotoColorAdjustments;
- (void)saveToPhotoLibraryWithCompletionHandler:(id /* block */)a0;
- (id)_imageManager;
- (id)initWithImage:(struct CGImage { } *)a0 uiOrientation:(long long)a1 videoAsset:(id)a2 photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 asset:(id)a4 options:(unsigned long long)a5;
- (id)initWithImage:(struct CGImage { } *)a0 uiOrientation:(long long)a1 videoAsset:(id)a2 photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 asset:(id)a4;
- (id)_initWithImageURL:(id)a0 videoURL:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 contentMode:(long long)a3;
- (id)_initWithImageURL:(id)a0 videoURL:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 contentMode:(long long)a3 skipInstantiatingImageAndAVAsset:(BOOL)a4;
- (id)initWithImage:(struct CGImage { } *)a0 uiOrientation:(long long)a1 videoAsset:(id)a2 photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 asset:(id)a4 options:(unsigned long long)a5 videoComposition:(id)a6;
- (id)initWithImage:(struct CGImage { } *)a0 uiOrientation:(long long)a1 videoAsset:(id)a2 photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 assetUUID:(id)a4 options:(unsigned long long)a5 videoComposition:(id)a6;
- (void)_ensureConstituentData;
- (void).cxx_destruct;
- (id)videoComplement;
- (id)_initWithImage:(struct CGImage { } *)a0 uiOrientation:(long long)a1 videoAsset:(id)a2 photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 asset:(id)a4 assetUUID:(id)a5 options:(unsigned long long)a6 videoComposition:(id)a7;
- (BOOL)_synchronouslyLoadImageURL:(id *)a0 videoURL:(id *)a1 error:(id *)a2;
- (void)_loadConstituentURLsWithNetworkAccessAllowed:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)image;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundleAtURL:(id)a0;

@end
