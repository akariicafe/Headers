@class NSString, RBSProcessMonitor;

@interface WFApplicationTerminationMonitor : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) RBSProcessMonitor *processMonitor;

- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startMonitoringWithTerminationHandler:(id /* block */)a0;

@end
