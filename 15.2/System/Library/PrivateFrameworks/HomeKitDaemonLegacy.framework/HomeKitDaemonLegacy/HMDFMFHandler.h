@class HMDFMFRequest, NSString, HMDFMF, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HMDFMFHandler : HMFObject <FMFSessionDelegate, HMFTimerDelegate, HMFLogging>

@property (class, readonly) HMDFMFHandler *sharedHandler;

@property (retain, nonatomic) HMDFMF *fmfStatus;
@property (retain, nonatomic) HMDFMFRequest *currentFMFRequest;
@property (readonly, nonatomic) NSMutableArray *queries;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)sendNotification;
- (void)queryFMFStatusWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)homeDataLoaded:(id)a0;
- (void)meDeviceChanged;
- (void)fmfDevicesChanged;
- (void)_initiateFMFRequest;
- (void)_processDevices:(id)a0 error:(id)a1;
- (unsigned long long)_computeFMFStatus:(id)a0;
- (void)_respondToPendingRequests:(id)a0;

@end
