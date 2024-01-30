@class NSDate, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, CalDateProvider;

@interface EKTravelAdvisoryTimelinessAuthority : NSObject <CalActivatable>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSDate *startOfLeaveNowPeriodInternal;
@property (retain, nonatomic) NSDate *startOfRunningLatePeriodInternal;
@property (nonatomic) BOOL internalActive;
@property (nonatomic) unsigned long long internalPeriod;
@property (copy, nonatomic) id /* block */ internalPeriodChangedCallback;
@property (readonly, nonatomic) id<CalDateProvider> dateProvider;
@property (readonly, nonatomic) NSDate *startOfLeaveNowPeriod;
@property (readonly, nonatomic) NSDate *startOfRunningLatePeriod;
@property (copy, nonatomic) id /* block */ periodChangedCallback;
@property (readonly, nonatomic) unsigned long long period;

+ (id)stringForPeriod:(unsigned long long)a0;

- (void)_refresh;
- (BOOL)active;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_uninstallTimer;
- (void)updateWithHypothesis:(id)a0;
- (void)_refreshOnDate:(id)a0;
- (void)activate;
- (void)_refreshTimer;
- (void)deactivate;
- (id)initWithDateProvider:(id)a0;
- (void)_refreshPeriod;

@end
