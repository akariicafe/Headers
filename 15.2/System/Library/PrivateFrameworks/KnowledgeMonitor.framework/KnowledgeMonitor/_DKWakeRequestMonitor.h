@class NSString, NSObject, NSDate;
@protocol OS_dispatch_source;

@interface _DKWakeRequestMonitor : _DKMonitor {
    BOOL _updateTimerResumed;
}

@property (retain, nonatomic) NSDate *nextUserVisibleWakeRequestDate;
@property (retain, nonatomic) NSString *nextUserVisibleWakeRequestor;
@property (nonatomic) int wakeRequestToken;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *updateTimer;

+ (id)eventStream;
+ (id)entitlements;

- (void)saveState;
- (id)loadState;
- (void)obtainNextUserVisibleWakeRequest;
- (void)synchronouslyReflectCurrentValue;
- (void)start;
- (void).cxx_destruct;
- (void)deactivate;
- (void)dealloc;
- (void)stop;

@end
