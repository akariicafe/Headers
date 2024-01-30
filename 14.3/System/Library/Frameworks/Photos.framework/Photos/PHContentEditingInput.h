@class NSDate, NSString, NSURL, UIImage, PHAdjustmentData, PHLivePhoto, NSObject, NSMutableArray, CLLocation, NSNumber, AVAsset;
@protocol OS_dispatch_queue;

@interface PHContentEditingInput : NSObject {
    NSObject<OS_dispatch_queue> *_avAssetIsolationQueue;
    NSMutableArray *_sandboxExtensionHandles;
}

@property (nonatomic) long long mediaType;
@property (nonatomic) unsigned long long mediaSubtypes;
@property (nonatomic) long long playbackStyle;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) CLLocation *location;
@property (retain, nonatomic) PHAdjustmentData *adjustmentData;
@property (nonatomic) long long baseVersion;
@property (retain, nonatomic) NSNumber *originalResourceChoice;
@property (retain, nonatomic) UIImage *displaySizeImage;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;
@property (copy, nonatomic) NSURL *fullSizeImageURL;
@property (nonatomic) int fullSizeImageOrientation;
@property (retain, nonatomic) PHLivePhoto *livePhoto;
@property (copy, nonatomic) NSURL *videoURL;
@property (copy, nonatomic) NSURL *overCapturePhotoURL;
@property (copy, nonatomic) NSURL *overCaptureVideoURL;
@property (copy, nonatomic) NSURL *frontSwappingImageRenderURL;
@property (copy, nonatomic) NSURL *backSwappingImageRenderURL;
@property (copy, nonatomic) NSURL *frontSwappingVideoRenderURL;
@property (copy, nonatomic) NSURL *backSwappingVideoRenderURL;
@property (retain, nonatomic) PHAdjustmentData *originalAdjustmentData;
@property (readonly) AVAsset *avAsset;
@property (readonly) AVAsset *audiovisualAsset;

- (id)audioMix;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isMediaSubtype:(unsigned long long)a0;
- (id)description;
- (id)imagePreview;
- (void)consumeSandboxExtensionToken:(id)a0;
- (void)loadFullSizeImageDataWithCompletionHandler:(id /* block */)a0;
- (void)requestFullSizeImageURLWithCompletionHandler:(id /* block */)a0;
- (void)_invalidateAVAsset;
- (id)videoComposition;

@end
