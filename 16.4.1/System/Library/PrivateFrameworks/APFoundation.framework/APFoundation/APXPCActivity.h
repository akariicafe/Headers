@class NSString, NSObject;
@protocol OS_dispatch_queue, APXPCActivityDelegate, OS_xpc_object;

@interface APXPCActivity : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *activityQueue;

@property (retain, nonatomic) id<APXPCActivityDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property (nonatomic) BOOL deferralCheckActive;
@property (retain, nonatomic) NSString *taskID;
@property (nonatomic) BOOL staticActivity;

+ (id)_translateCriteria:(id)a0;

- (BOOL)finished;
- (void)checkin;
- (BOOL)shouldDefer;
- (BOOL)setActivityState:(long long)a0;
- (void)_registerActivityWithCriteria:(id)a0;
- (void)schedule;
- (void)_backgroundDeferralCheck;
- (void)cancel;
- (void)scheduleWithDelay:(long long)a0;
- (void)_startDeferralCheck;
- (id)initWithDelegate:(id)a0;
- (BOOL)deferActivity;
- (BOOL)_continueActivity;
- (void).cxx_destruct;
- (void)_endDeferralCheck;

@end
