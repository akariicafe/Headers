@class NSOperationQueue, NSArray, NSString;

@interface HMIHomeKitClient : HMFObject <HMFLogging>

@property (readonly) NSOperationQueue *homeKitOperationQueue;
@property (readonly, getter=isSetup) BOOL setup;
@property (readonly) unsigned long long cachePolicy;
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
- (id)initWithCachePolicy:(unsigned long long)a0;
- (id)initWithNoCaching;
- (id)homePersonManagerForHomeUUID:(id)a0;
- (id)homeForHMPersonManagerUUID:(id)a0;
- (id)homePersonManagersForCurrentDevice;
- (id)photosPersonManagerForHomeUUID:(id)a0 sourceUUID:(id)a1;
- (id)cameraProfileWithUUID:(id)a0;
- (id)homeWithCameraProfileUUID:(id)a0;

@end
