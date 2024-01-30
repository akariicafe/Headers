@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface DTProcessControlService : DTXService <DTProcessControlServiceAuthorizedMethods> {
    NSMutableArray *_pids;
    NSMutableArray *_sources;
    NSMutableDictionary *_activeIODispatchSources;
    NSObject<OS_dispatch_queue> *_deathNoteQueue;
    NSObject<OS_dispatch_queue> *_synchronousRedirectionQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0;

- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;
- (void)_performMemoryWarningForPid:(int)a0;
- (int)cleanupPid:(int)a0;
- (void)handleRedirectionIterationForFileDescriptor:(int)a0 forPid:(int)a1 withDispatchSource:(id)a2;
- (id)insertViewDebuggingLibrariesForPid:(int)a0;
- (void)killPid:(id)a0;
- (id)launchSuspendedProcessWithDevicePath:(id)a0 bundleIdentifier:(id)a1 environment:(id)a2 arguments:(id)a3;
- (id)launchSuspendedProcessWithDevicePath:(id)a0 bundleIdentifier:(id)a1 environment:(id)a2 arguments:(id)a3 options:(id)a4;
- (int)maybeRedirectFromFileDescriptor:(int)a0 fromPid:(int)a1 withScratchBuffer:(char *)a2 ofByteLength:(unsigned long long)a3;
- (id)requestDisableMemoryLimitsForPid:(int)a0;
- (void)resumePid:(id)a0;
- (void)sendProcessControlEvent:(id)a0 toPid:(id)a1;
- (void)sendSignal:(id)a0 toPid:(id)a1;
- (void)startObservingPid:(id)a0;
- (void)stopObservingPid:(id)a0;
- (void)suspendPid:(id)a0;
- (void)watchOutputFileDescriptor:(int)a0 forPid:(int)a1;
- (void)watchOutputFileName:(id)a0 directory:(id)a1 forPid:(int)a2;

@end
