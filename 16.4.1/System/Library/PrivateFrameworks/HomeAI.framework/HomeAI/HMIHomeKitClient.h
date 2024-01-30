@class NSArray, NSString, NSOperationQueue, HMHomeManager;

@interface HMIHomeKitClient : HMFObject <HMFLogging>

@property (readonly) NSOperationQueue *homeKitOperationQueue;
@property (readonly, getter=isSetup) BOOL setup;
@property (readonly) unsigned long long cachePolicy;
@property (retain) HMHomeManager *homeManager;
@property (readonly) NSArray *homes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)setup;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isCurrentDevicePrimaryResident;
- (id)cameraProfileWithUUID:(id)a0;
- (id)homeForHMPersonManagerUUID:(id)a0;
- (id)homePersonManagerForHomeUUID:(id)a0;
- (id)homePersonManagersForCurrentDevice;
- (id)homeWithCameraProfileUUID:(id)a0;
- (id)initWithCachePolicy:(unsigned long long)a0;
- (id)initWithNoCaching;
- (id)photosPersonManagerForHomeUUID:(id)a0 sourceUUID:(id)a1;

@end
