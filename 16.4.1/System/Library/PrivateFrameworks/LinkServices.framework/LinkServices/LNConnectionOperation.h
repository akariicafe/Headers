@class NSObject, NSUUID, LNConnection, LNWatchdogTimer;
@protocol OS_os_activity, LNConnectionOperationDelegate;

@interface LNConnectionOperation : NSObject {
    id /* block */ _activityProvider;
    NSObject<OS_os_activity> *_activity;
}

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) LNWatchdogTimer *requestTimer;
@property (readonly, nonatomic) double timeout;
@property (retain, nonatomic) LNConnection<LNConnectionOperationDelegate> *connection;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;

- (void)finishWithError:(id)a0;
- (unsigned long long)hash;
- (void)cancelTimeout;
- (void)start;
- (id)description;
- (void).cxx_destruct;
- (void)setRequestTimer;
- (void)extendTimeout;
- (id)initWithIdentifier:(id)a0 priority:(long long)a1 activity:(id /* block */)a2;

@end
