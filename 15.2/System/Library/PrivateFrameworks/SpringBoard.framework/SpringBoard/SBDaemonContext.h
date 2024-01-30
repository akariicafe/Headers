@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface SBDaemonContext : NSObject {
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSMutableDictionary *_daemonRequests;
    int _pid;
}

- (void)addRequest:(id)a0 forKey:(id)a1;
- (void)removeRequestForKey:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPid:(int)a0 queue:(id)a1;
- (void)_handleCancelation;
- (int)pid;
- (id)_newDispatchSourceForPid:(int)a0 queue:(id)a1;

@end
