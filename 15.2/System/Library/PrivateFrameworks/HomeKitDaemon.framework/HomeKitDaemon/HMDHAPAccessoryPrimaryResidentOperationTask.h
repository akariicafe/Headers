@class NSMutableArray;
@protocol HMDHAPAccessoryTask;

@interface HMDHAPAccessoryPrimaryResidentOperationTask : HMDHAPAccessoryTask

@property (readonly, nonatomic) NSMutableArray *responses;
@property (retain, nonatomic) NSMutableArray *remoteTasks;
@property (retain, nonatomic) id<HMDHAPAccessoryTask> localTask;

+ (void)filterAccessoriesByDevicesFromMap:(id)a0 currentDeviceAccessories:(id)a1 otherDeviceAccessories:(id)a2;

- (void)execute;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 requests:(id)a1 completion:(id /* block */)a2;
- (id)_makeLocalTaskWithRequests:(id)a0 completion:(id /* block */)a1;
- (void)_fanOutRemoteRequests:(id)a0 residentToAccessoriesMap:(id)a1 responseWaitGroup:(id)a2;
- (void)_processLocalRequests:(id)a0 responseWaitGroup:(id)a1;
- (id)_makeRemoteTaskWithRequests:(id)a0 delegateDevice:(id)a1 completion:(id /* block */)a2;

@end
