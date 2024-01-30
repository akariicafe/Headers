@class NSString, NSObject, NSDate;
@protocol OS_dispatch_source;

@interface _DKWakeRequestMonitor : _DKMonitor {
    BOOL _updateTimerResumed;
}

@property (retain, nonatomic) NSDate *nextUserVisibleWakeRequestDate;
@property (retain, nonatomic) NSString *nextUserVisibleWakeRequestor;
@property (nonatomic) int wakeRequestToken;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *updateTimer;

+ (id)entitlements;
+ (id)eventStream;

- (void)synchronouslyReflectCurrentValue;
- (void)saveState;
- (id)loadState;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)deactivate;
- (void)obtainNextUserVisibleWakeRequest;

@end
