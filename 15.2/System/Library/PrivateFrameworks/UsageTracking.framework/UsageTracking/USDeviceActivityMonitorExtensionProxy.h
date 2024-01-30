@class NSArray, NSObject;
@protocol OS_dispatch_queue_global;

@interface USDeviceActivityMonitorExtensionProxy : NSObject <USDeviceActivityMonitorExtension>

@property (readonly) NSArray *extensions;
@property (readonly) NSObject<OS_dispatch_queue_global> *timeoutQueue;
@property unsigned long long timeoutInSeconds;
@property unsigned long long timeoutLeewayInSeconds;

- (id)initWithBundleIdentifier:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)_cancelTimer:(id)a0;
- (id)initWithExtensionsMatchingAttributes:(id)a0 error:(id *)a1;
- (void)intervalDidStartForActivity:(id)a0 replyHandler:(id /* block */)a1;
- (void)_requestExtensionVendorProxyForExtension:(id)a0 proxyHandler:(id /* block */)a1;
- (void)intervalDidEndForActivity:(id)a0 replyHandler:(id /* block */)a1;
- (void)eventDidReachThreshold:(id)a0 activity:(id)a1 replyHandler:(id /* block */)a2;
- (void)intervalWillStartWarningForActivity:(id)a0 replyHandler:(id /* block */)a1;
- (void)intervalWillEndWarningForActivity:(id)a0 replyHandler:(id /* block */)a1;
- (void)eventWillReachThresholdWarning:(id)a0 activity:(id)a1 replyHandler:(id /* block */)a2;
- (id)_scheduleTimerWithIntervalInSeconds:(unsigned long long)a0 leewayInSeconds:(unsigned long long)a1 handler:(id /* block */)a2;
- (id)_scheduleTimerWithIntervalInSeconds:(unsigned long long)a0 leewayInSeconds:(unsigned long long)a1 extensionPID:(int)a2 handler:(id /* block */)a3;
- (id)initWithClientIdentifier:(id)a0 error:(id *)a1;

@end
