@interface AVBorealisServerPortManager : NSObject

@property (nonatomic) unsigned long long portType;
@property (nonatomic) float hysteresisDurationSeconds;
@property (copy, nonatomic) id /* block */ notificationBlock;
@property (nonatomic) BOOL listeningEnabled;
@property (nonatomic) BOOL lastStateSent;
@property (nonatomic) long long generation;

- (void).cxx_destruct;
- (void)callNotificationBlock:(BOOL)a0;
- (id)initWithPortType:(unsigned long long)a0 hysteresisDurationSeconds:(float)a1 notificationBlock:(id /* block */)a2;
- (void)notifyStateChanged:(BOOL)a0 onQueue:(id)a1;

@end
