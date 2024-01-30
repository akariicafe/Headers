@class NSString, geo_isolater, NSObject;
@protocol OS_xpc_object;

@interface GEOXPCActivity : NSObject {
    NSString *_name;
    BOOL _isScheduled;
    BOOL _isRepeating;
    BOOL _shouldLaunchDaemon;
    id /* block */ _handler;
    NSObject<OS_xpc_object> *_activity;
    NSObject<OS_xpc_object> *_criteria;
    geo_isolater *_isolation;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *criteria;

+ (id)registerActivity:(id)a0 criteria:(id)a1 shouldLaunchDaemon:(BOOL)a2 handler:(id /* block */)a3;
+ (void)checkInActivity:(id)a0 handler:(id /* block */)a1;
+ (void)cancelActivity:(id)a0;
+ (void)updateActivities:(id /* block */)a0;
+ (void)addActivity:(id)a0 shouldLaunchDaemon:(BOOL)a1 repeating:(BOOL)a2;
+ (void)resetActivities;
+ (void)clearActivity:(id)a0;

- (void)_handleRunActivity:(id)a0;
- (void)finishActivity;
- (BOOL)shouldDeferActivity;
- (void)dealloc;
- (void)cancelActivity;
- (void)deferActivity;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 criteria:(id)a1 shouldLaunchDaemon:(BOOL)a2 handler:(id /* block */)a3;

@end
