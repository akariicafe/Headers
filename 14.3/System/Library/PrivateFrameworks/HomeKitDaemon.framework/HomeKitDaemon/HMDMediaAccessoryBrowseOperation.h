@class NSString, NSArray, HMDMediaEndpoint;
@protocol HMFLocking;

@interface HMDMediaAccessoryBrowseOperation : HMFOperation <HMFLogging> {
    id<HMFLocking> _lock;
    void *_session;
}

@property (readonly, copy) NSString *accessoryIdentifier;
@property unsigned int endpointFeatures;
@property (readonly) HMDMediaEndpoint *endpoint;
@property (readonly) NSArray *outputDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (double)defaultTimeout;

- (void)cancel;
- (id)initWithAccessoryIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)main;
- (id)initWithAccessoryIdentifier:(id)a0 timeout:(double)a1;

@end
