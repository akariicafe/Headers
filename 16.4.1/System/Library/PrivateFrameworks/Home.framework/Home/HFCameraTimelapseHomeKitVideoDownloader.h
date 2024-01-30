@class HMCameraProfile;

@interface HFCameraTimelapseHomeKitVideoDownloader : NSObject <HFCameraTimelapseVideoDownloader>

@property (weak, nonatomic) HMCameraProfile *cameraProfile;

- (void).cxx_destruct;
- (id)initWithCameraProfile:(id)a0;
- (id)_downloadOperationForTimelapseClip:(id)a0;
- (id)_fetchOperationForClip:(id)a0 withClipManager:(id)a1;
- (id)downloadOperationForTimelapseClip:(id)a0;
- (id)priorityDownloadOperationForTimelapseClip:(id)a0;

@end
