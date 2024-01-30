@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessoryFirmwareUpdatePolicy : NSObject <HMDAccessoryFirmwareUpdatePolicy>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) BOOL status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configure;
- (void)notify:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)evaluate;
- (id)initWithWorkQueue:(id)a0;
- (void)evaluateAndNotify;

@end
