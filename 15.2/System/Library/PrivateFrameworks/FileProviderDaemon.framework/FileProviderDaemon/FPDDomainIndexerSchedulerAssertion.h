@class NSString, FPDProcessMonitor;

@interface FPDDomainIndexerSchedulerAssertion : NSObject <FPDProcessMonitorDelegate, FPIndexingAssertion> {
    FPDProcessMonitor *_monitor;
    int _pid;
    BOOL _forceForeground;
    id /* block */ _unregisterForceRunning;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void)processMonitor:(id)a0 didBecomeForeground:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (id)initWithPID:(int)a0 forceForeground:(BOOL)a1;

@end
