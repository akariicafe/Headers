@class NSMutableSet, RBSProcessMonitor;

@interface CAProcessMonitor : NSObject {
    id /* block */ _callback;
    RBSProcessMonitor *_processMonitor;
    NSMutableSet *_processIdentifiers;
}

- (void)updateConfiguration;
- (id)initWithCallback:(id /* block */)a0;
- (void)dealloc;
- (void)addMonitoringProcess:(int)a0 isRunning:(BOOL *)a1 isSuspended:(BOOL *)a2;
- (void)removeMonitoringProcess:(int)a0;

@end
