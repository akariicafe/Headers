@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface EDAssetDownloadScheduler : NSObject

@property (copy, nonatomic) NSString *_identifier;
@property (copy, nonatomic) NSString *_lastFailureIntervalKey;
@property (copy, nonatomic) id /* block */ _handler;
@property (nonatomic) long long _regularInterval;
@property (nonatomic) long long _failureInterval;
@property (nonatomic) long long _backOffFactor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_queue;
@property (readonly, nonatomic) id /* block */ activityHandlerBlock;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 regularInterval:(long long)a1 failureInterval:(long long)a2 backOffFactor:(long long)a3 handler:(id /* block */)a4;
- (id)_xpcCriteriaForInterval:(long long)a0;
- (long long)_nextFailureInterval;
- (id)initWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)_rescheduleAfterSuccessActivity:(id)a0;
- (void)_rescheduleAfterFailureActivity:(id)a0;
- (void)_stopSchedulingActivity:(id)a0;

@end
