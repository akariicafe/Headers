@class CBCentralManager, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface HAPBTLECentralManager : HMFObject <CBCentralManagerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) CBCentralManager *centralManager;
@property (retain, nonatomic) NSMutableSet *delegates;
@property long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getInstance;

- (void)centralManagerDidUpdateState:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)registerCentralManagerDelegate:(id)a0;
- (id)_getCentralManager;

@end
