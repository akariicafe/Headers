@interface BRProcessMonitor : NSObject {
    id _monitor;
}

- (void)dealloc;
- (id)_bundleIDForPID:(int)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)_isProcessForeground:(id)a0 bundleID:(id)a1;
- (id)initForProcessID:(int)a0 observer:(id)a1;

@end
