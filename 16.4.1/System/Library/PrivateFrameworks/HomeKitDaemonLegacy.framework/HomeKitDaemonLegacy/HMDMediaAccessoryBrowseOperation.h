@class NSString, NSArray, HMDMediaEndpoint;

@interface HMDMediaAccessoryBrowseOperation : HMFOperation <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
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

- (void)main;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAccessoryIdentifier:(id)a0;
- (id)initWithAccessoryIdentifier:(id)a0 timeout:(double)a1;

@end
