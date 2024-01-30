@class CUSystemMonitor, NSObject;
@protocol OS_dispatch_queue;

@interface ENDeviceIdentityUtility : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) CUSystemMonitor *systemMonitor;

- (void).cxx_destruct;
- (id)initWithSystemMonitor:(id)a0;
- (void)signDataWithDeviceIdentity:(id)a0 ignoreExistingKeys:(BOOL)a1 completion:(id /* block */)a2;
- (void)_signDataWithDeviceIdentity:(id)a0 ignoreExistingKeys:(BOOL)a1 completion:(id /* block */)a2;

@end
