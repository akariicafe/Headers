@class HMFTimer, NSString, NSArray, NSMutableArray, HMDDevice;
@protocol HMFLocking, HMDRemoteDeviceMonitorOperationFactory;

@interface HMDRemoteDeviceInformation : HMFObject <HMFObject> {
    id<HMFLocking> _lock;
    NSMutableArray *_confirmationHandlers;
    BOOL _reachable;
    long long _state;
    HMDDevice *_device;
    id<HMDRemoteDeviceMonitorOperationFactory> _operationFactory;
    HMFTimer *_retryTimer;
}

@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
