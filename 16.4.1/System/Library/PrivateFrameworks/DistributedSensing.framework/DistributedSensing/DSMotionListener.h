@class NSArray, DSClientMotionDataOptions, DSMotionStateListenerProxy, NSString, NSObject;
@protocol OS_dispatch_queue, DSMotionListenerDelegate;

@interface DSMotionListener : NSObject <DSListenerClientProtocol>

@property (retain, nonatomic) DSClientMotionDataOptions *motionDataOptions;
@property (weak, nonatomic) id<DSMotionListenerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) DSMotionStateListenerProxy *sharedListener;
@property BOOL isSubscribed;
@property (nonatomic) BOOL isTestMode;
@property (readonly) NSArray *activeProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)failedToStartListenerWithError:(id)a0;
- (void)startedListener;
- (void)stoppedListener;
- (void)receivedData:(id)a0 fromProvider:(id)a1;
- (void)requestMotionData;
- (void)startMotionDataListenerWithOptions:(id)a0;
- (void)stopMotionDataListener;
- (void)updateProviders:(id)a0;

@end
