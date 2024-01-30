@class HMDFMFRequest, NSString, HMDFMF, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMDFMFHandler : HMFObject <FMFSessionDelegate, HMFLogging, HMFTimerDelegate>

@property (retain, nonatomic) HMDFMF *fmfStatus;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMDFMFRequest *currentFMFRequest;
@property (retain, nonatomic) NSMutableArray *queries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)sharedHandler;

- (id)init;
- (void)sendNotification;
- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (void)queryFMFStatusWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)homeDataLoaded:(id)a0;
- (void)_initiateFMFRequest;
- (void)_processDevices:(id)a0 error:(id)a1;
- (void)_respondToPendingRequests:(id)a0;
- (unsigned long long)_computeFMFStatus:(id)a0;
- (void)meDeviceChanged;
- (void)fmfDevicesChanged;

@end
