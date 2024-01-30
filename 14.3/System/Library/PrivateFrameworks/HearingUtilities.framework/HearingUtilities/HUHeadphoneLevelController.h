@class NSString, ADAMAudioDataReceiver, AXDispatchTimer, NSObject;
@protocol OS_dispatch_queue;

@interface HUHeadphoneLevelController : NSObject <ADAMAudioDataReceiverDelegate>

@property (retain, nonatomic) ADAMAudioDataReceiver *receiver;
@property (retain, nonatomic) AXDispatchTimer *adamSuspendedTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;
@property (nonatomic) float slowLeq;
@property (nonatomic) float fastLeq;
@property (nonatomic, getter=isMeasurementEnabled) BOOL measurementEnabled;
@property (nonatomic) unsigned long long thresholdLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (id)registerForHeadphoneLevelUpdates:(id)a0;
- (void)dealloc;
- (void)restartADAMTimer;
- (void)receiveAudioSample:(id)a0;
- (void)pushValues;

@end
