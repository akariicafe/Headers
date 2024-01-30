@class NSObject;
@protocol OS_dispatch_queue;

@interface BorealisServerSpeakerStateHysteresisNotifier : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) float hysteresisDurationSeconds;
@property (nonatomic) BOOL speakerStateListeningEnabled;
@property (copy, nonatomic) id /* block */ notificationBlock;
@property (nonatomic) BOOL lastStateSent;
@property (nonatomic) long long generation;

- (void)sendState;
- (void).cxx_destruct;
- (void)callNotificationBlock:(BOOL)a0;
- (void)stateChanged:(BOOL)a0;
- (id)initWithSerialQueue:(id)a0 hysteresisDurationSeconds:(float)a1 notificationBlock:(id /* block */)a2;

@end
