@class NSObject, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue;

@interface MKTileOverlayRequester : GEOTileRequester {
    BOOL _cancelled;
    NSMutableArray *_waiting;
    NSMutableSet *_running;
    NSMutableArray *_errors;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (unsigned char)tileProviderIdentifier;
+ (unsigned int)registerOverlay:(id)a0;
+ (void)unregisterOverlay:(unsigned int)a0;

- (void)cancel;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)dealloc;
- (void)_operationFinished:(id)a0;
- (void)_operationFailed:(id)a0 error:(id)a1;
- (id)initWithTileRequest:(id)a0 delegateQueue:(id)a1 delegate:(id)a2;
- (void)_doWorkOrFinish;
- (void)_startOnWorkQueue;
- (void)start;

@end
