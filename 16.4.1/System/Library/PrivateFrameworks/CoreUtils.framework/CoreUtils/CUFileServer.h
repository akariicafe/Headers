@class NSString, NSMutableDictionary, NSURL, RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUFileServer : NSObject <CUActivatable> {
    BOOL _activateCalled;
    RPCompanionLinkClient *_clinkClient;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_dispatch_queue> *_ioQueue;
    unsigned long long _lastSessionID;
    char _rootPath[1024];
    NSMutableDictionary *_sessionMap;
    NSObject<OS_dispatch_source> *_sessionTimer;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSURL *rootDirectoryURL;
@property (copy, nonatomic) NSString *serviceType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_update;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)_handleKeepAlive:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleQuery:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleQuery:(id)a0 session:(id)a1;
- (void)_handleRequestFiles:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleSessionStart:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleSessionStop:(id)a0 responseHandler:(id /* block */)a1;
- (void)_sessionInvalidate:(id)a0;
- (void)_sessionTimerFired;

@end
