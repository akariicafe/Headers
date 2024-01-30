@class NSString, geo_isolater, NSObject;
@protocol OS_xpc_object;

@interface GEOXPCActivity : NSObject {
    NSString *_name;
    BOOL _isRepeating;
    BOOL _shouldLaunchDaemon;
    id /* block */ _handler;
    NSObject<OS_xpc_object> *_activity;
    NSObject<OS_xpc_object> *_criteria;
    geo_isolater *_isolation;
}

+ (void)cancelActivity:(id)a0;
+ (void)resetActivities;
+ (void)clearActivity:(id)a0;
+ (id)registerActivity:(id)a0 criteria:(id)a1 shouldLaunchDaemon:(BOOL)a2 handler:(id /* block */)a3;
+ (void)checkInActivity:(id)a0 handler:(id /* block */)a1;
+ (void)updateActivities:(id /* block */)a0;
+ (void)addActivity:(id)a0 shouldLaunchDaemon:(BOOL)a1 repeating:(BOOL)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)shouldDeferActivity;
- (void)finishActivity;
- (void)cancelActivity;
- (id)initWithName:(id)a0 criteria:(id)a1 shouldLaunchDaemon:(BOOL)a2 handler:(id /* block */)a3;
- (void)_handleRunActivity:(id)a0;
- (void)deferActivity;

@end
