@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue, HFCameraTimelapseVideoDownloader;

@interface HFCameraTimelapseVideoProvider : NSObject

@property (retain, nonatomic) NSOperationQueue *downloadQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bookkeepingQueue;
@property (retain, nonatomic) id<HFCameraTimelapseVideoDownloader> timelapseVideoDownloader;

+ (id)sharedProvider;

- (id)init;
- (void).cxx_destruct;
- (void)getVideoForTimelapseClip:(id)a0 taskType:(unsigned long long)a1 delegate:(id)a2;
- (void)_getVideoForTimelapseClip:(id)a0 taskType:(unsigned long long)a1 delegate:(id)a2;

@end
