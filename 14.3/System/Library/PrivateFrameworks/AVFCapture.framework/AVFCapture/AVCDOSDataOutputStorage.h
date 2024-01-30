@class NSObject, AVCaptureOutput, NSMutableArray;
@protocol AVCaptureDataOutputDelegateOverride, OS_dispatch_queue;

@interface AVCDOSDataOutputStorage : NSObject

@property (readonly, nonatomic) AVCaptureOutput<AVCaptureDataOutputDelegateOverride> *dataOutput;
@property (readonly, nonatomic) NSMutableArray *synchronizedDataQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly, nonatomic, getter=isLive) BOOL live;
@property (retain, nonatomic) NSMutableArray *timestampAdjustmentsDataQueue;
@property (retain, nonatomic) NSMutableArray *mdoTimeStampHistoryQueue;

- (void)dealloc;
- (id)initWithDataOutput:(id)a0;

@end
