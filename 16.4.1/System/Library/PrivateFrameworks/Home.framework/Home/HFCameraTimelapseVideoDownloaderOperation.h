@class NSURL, HFCameraAnalyticsCameraTimelapseLoadEvent, HMCameraClip;
@protocol HFCameraTimelapseVideoDownloaderDelegate;

@interface HFCameraTimelapseVideoDownloaderOperation : NSBlockOperation

@property (retain, nonatomic) HFCameraAnalyticsCameraTimelapseLoadEvent *timelapseLoadEvent;
@property (weak, nonatomic) id<HFCameraTimelapseVideoDownloaderDelegate> delegate;
@property (copy, nonatomic) id /* block */ downloadingBlock;
@property (retain, nonatomic) HMCameraClip *timelapseClip;
@property (retain, nonatomic) NSURL *destinationURL;
@property (nonatomic) BOOL fileAlreadyExists;

+ (id)downloadingOperationForTimelapseClip:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)fileDownloadFailedWithError:(id)a0;
- (void)fileDownloadFinishedWithElapsedTime:(double)a0;
- (void)fileDownloadNotNeeded;

@end
