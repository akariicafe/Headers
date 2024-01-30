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
@property (copy, nonatomic) NSString *accessibilityDescription;
@property (readonly) AVAsset *avAsset;
@property (readonly) AVAsset *audiovisualAsset;

- (id)imagePreview;
- (void)_invalidateAVAsset;
- (void)loadFullSizeImageDataWithCompletionHandler:(id /* block */)a0;
- (void)requestFullSizeImageURLWithCompletionHandler:(id /* block */)a0;
- (void)consumeSandboxExtensionToken:(id)a0;
- (id)description;
- (id)videoComposition;
- (void).cxx_destruct;
- (id)init;
- (id)audioMix;
- (BOOL)isMediaSubtype:(unsigned long long)a0;
- (void)dealloc;

@end
