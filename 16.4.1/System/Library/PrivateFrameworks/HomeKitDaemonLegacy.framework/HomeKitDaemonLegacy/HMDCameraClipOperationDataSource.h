@class NSString;

@interface HMDCameraClipOperationDataSource : HMFObject <HMDCameraClipOperationDataSource>

@property (readonly) double operationTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendData:(id)a0 toStreamingAssetAppendContext:(id)a1 completion:(id /* block */)a2;
- (void)submitOperationEvent:(id)a0;
- (id)timerWithTimeInterval:(double)a0 options:(unsigned long long)a1;

@end
