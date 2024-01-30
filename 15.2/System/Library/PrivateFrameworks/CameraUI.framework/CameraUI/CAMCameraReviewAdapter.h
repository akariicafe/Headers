@class NSString, NSMutableArray, UIViewController;
@protocol CAMCameraReviewViewController;

@interface CAMCameraReviewAdapter : NSObject <CAMCameraCaptureDelegate>

@property (readonly, nonatomic) NSMutableArray *_pendingAssetsForReview;
@property (retain, nonatomic, getter=_cachedReviewViewController, setter=_setCachedReviewViewController:) UIViewController<CAMCameraReviewViewController> *cachedReviewViewController;
@property (readonly, nonatomic) UIViewController<CAMCameraReviewViewController> *cameraReviewViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cameraReviewViewControllerClass;
+ (id)reviewAssetForPhoto:(id)a0 withProperties:(id)a1;
+ (id)reviewAssetForLivePhoto:(id)a0 withProperties:(id)a1;
+ (id)reviewAssetForAVAsset:(id)a0 audioMix:(id)a1 properties:(id)a2;

- (void).cxx_destruct;
- (id)init;
- (void)cameraViewController:(id)a0 didCapturePhoto:(id)a1 withProperties:(id)a2 error:(id)a3;
- (void)cameraViewController:(id)a0 didCaptureLivePhoto:(id)a1 withProperties:(id)a2 error:(id)a3;
- (void)cameraViewController:(id)a0 didCaptureAVAsset:(id)a1 andAudioMix:(id)a2 withProperties:(id)a3 error:(id)a4;

@end
