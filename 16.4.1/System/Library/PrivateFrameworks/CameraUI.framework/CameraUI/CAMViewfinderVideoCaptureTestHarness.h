@class NSString, CAMViewfinderViewController;

@interface CAMViewfinderVideoCaptureTestHarness : CAMPerformanceTestHarness <CAMViewfinderViewControllerVideoCaptureRequestTestingDelegate>

@property (retain, nonatomic) CAMViewfinderViewController *_viewfinderViewController;
@property (readonly, nonatomic) double _videoDurationInSeconds;
@property (readonly, nonatomic) double _initialDelayInSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startTesting;
- (void).cxx_destruct;
- (id)initWithTestName:(id)a0 viewfinderViewController:(id)a1 videoDurationInSeconds:(double)a2 initialDelayInSeconds:(double)a3;
- (void)viewfinderViewController:(id)a0 didReceiveVideoRequestDidCompleteCapture:(id)a1 withResponse:(id)a2 error:(id)a3;
- (void)viewfinderViewController:(id)a0 didReceiveVideoRequestDidStartCapturing:(id)a1;

@end
