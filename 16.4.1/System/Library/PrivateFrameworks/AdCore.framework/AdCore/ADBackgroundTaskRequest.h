@class NSDate, NSString, NSObject;
@protocol OS_xpc_object;

@interface ADBackgroundTaskRequest : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property (retain, nonatomic) NSObject<OS_xpc_object> *criteria;
@property (nonatomic) BOOL performDeferralCheck;
@property (retain, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (nonatomic) long long delay;
@property (nonatomic) BOOL requiresNetworkConnectivity;
@property (nonatomic) BOOL requireBuddyComplete;
@property (nonatomic) BOOL requireClassCData;
@property (nonatomic) BOOL allowBattery;
@property (nonatomic) BOOL requireSleep;
@property (nonatomic) BOOL isRepeating;
@property (nonatomic) long long backgroundTaskRetryCount;
@property (nonatomic) long long gracePeriod;
@property (retain, nonatomic) NSString *priority;
@property (nonatomic) BOOL isCPUIntensive;
@property (readonly, nonatomic) BOOL shouldDefer;

- (void)setPropertyAsInteger:(id)a0 value:(long long)a1;
- (id)initWithID:(id)a0;
- (BOOL)taskCanContinueForTime:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCriteria:(id)a0 ID:(id)a1 activity:(id)a2;
- (id)getPropertyAsString:(id)a0;
- (BOOL)continueTask;
- (long long)getPropertyAsInteger:(id)a0;
- (BOOL)finishTask;
- (id)getPropertyAsDate:(id)a0;
- (void)endBackgroundDeferralCheck;
- (BOOL)taskIsContinuing;
- (void)_backgroundDeferralCheck:(id)a0 completion:(id /* block */)a1;
- (double)getPropertyAsDouble:(id)a0;
- (void)setPropertyAsDate:(id)a0 value:(id)a1;
- (void)setPropertyAsString:(id)a0 value:(id)a1;
- (void)setPropertyAsDouble:(id)a0 value:(double)a1;
- (BOOL)deferTask;
- (id)description;
- (void)startBackgroundDeferralCheckForTime:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)taskIsDeferred;
- (id)copyBackgroundTaskAgentCriteria;
- (void).cxx_destruct;

@end
