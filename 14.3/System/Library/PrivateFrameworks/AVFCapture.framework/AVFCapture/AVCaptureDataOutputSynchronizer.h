@class NSArray, NSString, AVCaptureDataOutputSynchronizerInternal, NSObject;
@protocol AVCaptureDataOutputSynchronizerDelegate, OS_dispatch_queue;

@interface AVCaptureDataOutputSynchronizer : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureDepthDataOutputDelegate, AVCaptureVisionDataOutputDelegate, AVCapturePointCloudDataOutputDelegate, AVCaptureCameraCalibrationDataOutputDelegate> {
    AVCaptureDataOutputSynchronizerInternal *_internal;
}

@property (readonly, retain) NSArray *dataOutputs;
@property (readonly, nonatomic) id<AVCaptureDataOutputSynchronizerDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (int)_computedMasterSynchronizedDataQueueMaxDepthForDataOutputs:(id)a0;
- (void)_assignTimestampAdjustmentQueueToDataOutputStorageWithCommonProvenance;
- (void)_createTimestampHistoryQueuesForMetadataOutputStoragesWithNoTimestampAdjustmentQueues;
- (void)_overrideDataOutputDelegatesForDelegateCallbackQueue:(id)a0;
- (void)_appendSynchronizedData:(id)a0 forCaptureOutput:(id)a1;
- (void)_dispatchRipenedSynchronizedData;
- (void)_adjustSynchronizedDataTimestamps;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_earliestSlaveSynchronizedDataQueueTimestamp;
- (void)_dispatchSynchronizedDataWithTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)_allSlaveSynchronizedDataOutputsContainTimestampEqualToOrGreaterThanMasterTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)captureOutput:(id)a0 didOutputMetadataObjects:(id)a1 fromConnection:(id)a2;
- (id)initWithDataOutputs:(id)a0;
- (void)dealloc;
- (void)visionDataOutput:(id)a0 didOutputVisionDataPixelBuffer:(struct __CVBuffer { } *)a1 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 connection:(id)a3;
- (void)visionDataOutput:(id)a0 didDropVisionDataPixelBufferForTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 connection:(id)a2 reason:(long long)a3;
- (void)cameraCalibrationDataOutput:(id)a0 didOutputCameraCalibrationData:(id)a1 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 connection:(id)a3;
- (void)cameraCalibrationDataOutput:(id)a0 didDropCameraCalibrationDataAtTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 connection:(id)a2 reason:(long long)a3;
- (void)pointCloudDataOutput:(id)a0 didOutputPointCloudData:(id)a1 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 connection:(id)a3;
- (void)pointCloudDataOutput:(id)a0 didDropPointCloudData:(id)a1 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 connection:(id)a3 reason:(long long)a4;
- (void)depthDataOutput:(id)a0 didOutputDepthData:(id)a1 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 connection:(id)a3;
- (void)depthDataOutput:(id)a0 didDropDepthData:(id)a1 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 connection:(id)a3 reason:(long long)a4;
- (void)captureOutput:(id)a0 didDropSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;

@end
