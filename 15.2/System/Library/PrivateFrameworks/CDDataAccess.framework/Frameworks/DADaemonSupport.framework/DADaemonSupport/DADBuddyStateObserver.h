@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface DADBuddyStateObserver : NSObject {
    NSObject<OS_dispatch_source> *_buddyStatePollingTimer;
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
}

@property (copy, nonatomic) id /* block */ buddyDidFinishHandler;

+ (BOOL)hasPassedBuddy;
+ (BOOL)isSetupUser;

- (id)initWithQueue:(id)a0;
- (BOOL)isRunning;
- (void)start;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)stopWithAssertQueue:(BOOL)a0;
- (void)buddyDidFinish;
- (void)createPeriodicPollingTimer;
- (void)checkBuddyStatus;

@end
