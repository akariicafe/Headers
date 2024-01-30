@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface SBDaemonContext : NSObject {
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSMutableDictionary *_daemonRequests;
    int _pid;
}

- (void).cxx_destruct;
- (int)pid;
- (id)description;
- (id)initWithPid:(int)a0 queue:(id)a1;
- (void)addRequest:(id)a0 forKey:(id)a1;
- (void)removeRequestForKey:(id)a0;
- (id)_newDispatchSourceForPid:(int)a0 queue:(id)a1;
- (void)_handleCancelation;

@end
