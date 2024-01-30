@class HMFTimer, NSString, CHIPAccessoryServer;

@interface CHIPPluginAccessoryReachabilityManager : HMFObject <HMFTimerDelegate>

@property (retain, nonatomic) HMFTimer *reachabilityTimer;
@property (nonatomic) BOOL reachable;
@property (readonly, weak, nonatomic) CHIPAccessoryServer *server;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void)start;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithServer:(id)a0 timeout:(long long)a1 queue:(id)a2;
- (void)reachabilityUpdate;

@end
