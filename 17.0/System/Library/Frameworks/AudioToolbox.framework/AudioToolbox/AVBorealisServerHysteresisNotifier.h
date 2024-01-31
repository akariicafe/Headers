@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVBorealisServerHysteresisNotifier : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *portsToMonitor;

- (void)dealloc;
- (void)stateChanged:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithSerialQueue:(id)a0;
- (id)addPortToMonitor:(unsigned long long)a0 hysteresisDurationSeconds:(float)a1 notificationBlock:(id /* block */)a2;
- (id)getPortManagerForType:(unsigned long long)a0;
- (BOOL)isPortActive:(unsigned long long)a0 activePortsToken:(unsigned long long)a1;
- (void)processState:(unsigned long long)a0;
- (void)removePortToMonitor:(unsigned long long)a0;
- (void)sendState:(id)a0;
- (void)stateChanged:(BOOL)a0 forPort:(id)a1;

@end
