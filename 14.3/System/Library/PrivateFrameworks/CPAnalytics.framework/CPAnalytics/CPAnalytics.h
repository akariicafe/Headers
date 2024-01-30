@class CPAnalyticsSystemProperties, PHPhotoLibrary, CPAnalyticsDestinationsRegistry, NSObject;
@protocol OS_dispatch_queue;

@interface CPAnalytics : NSObject

@property (class, readonly, nonatomic) BOOL isAllowed;

@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) CPAnalyticsDestinationsRegistry *registry;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventsQueue;
@property (readonly) long long signpostUniqueValue;
@property (readonly, nonatomic) CPAnalyticsSystemProperties *systemProperties;

+ (id)bucketNameForDouble:(double)a0 bucketLimits:(id)a1 numberFormatter:(id)a2;
+ (void)addDestination:(id)a0;
+ (void)startAppTracking;
+ (void)endSignpost:(long long)a0 forEventName:(id)a1 withPayload:(id)a2;
+ (void)sendEvent:(id)a0 withPayload:(id)a1;
+ (void)updateWithConfigurationFilename:(id)a0 inBundle:(id)a1;
+ (id)bucketNameForInteger:(long long)a0 bucketLimits:(long long)a1;
+ (void)startViewTracking;
+ (void)setupSystemPropertyProvidersForLibrary:(id)a0;
+ (id)_sharedInstance;
+ (void)activateEventQueue;
+ (void)setupWithConfigurationAtURL:(id)a0;
+ (void)setupWithConfigurationFilename:(id)a0 inBundle:(id)a1;
+ (id)creationDateForSignpost:(long long)a0;
+ (void)releasePhotoLibrary;
+ (void)removeDestination:(id)a0;
+ (long long)startSignpost;

- (id)init;
- (void)addDestination:(id)a0;
- (void).cxx_destruct;
- (void)endSignpost:(long long)a0 forEventName:(id)a1 withPayload:(id)a2;
- (void)sendEvent:(id)a0 withPayload:(id)a1;
- (void)updateWithConfigurationFilename:(id)a0 inBundle:(id)a1;
- (void)setupSystemPropertyProvidersForLibrary:(id)a0;
- (void)activateEventQueue;
- (void)setupWithConfigurationAtURL:(id)a0;
- (void)setupWithConfigurationFilename:(id)a0 inBundle:(id)a1;
- (void)releasePhotoLibrary;
- (long long)_generateNextSignpostID;
- (void)removeDestination:(id)a0;
- (void)_setupSystemPropertyProviders;
- (long long)startSignpost;

@end
