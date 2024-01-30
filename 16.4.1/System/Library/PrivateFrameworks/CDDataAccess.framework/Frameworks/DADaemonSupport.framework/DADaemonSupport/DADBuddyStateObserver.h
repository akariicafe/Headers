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

- (BOOL)isRunning;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)buddyDidFinish;
- (void)checkBuddyStatus;
- (void)createPeriodicPollingTimer;
- (void)stopWithAssertQueue:(BOOL)a0;

@end
