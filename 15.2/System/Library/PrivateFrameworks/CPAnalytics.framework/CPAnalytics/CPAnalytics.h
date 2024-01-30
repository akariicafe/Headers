@class CPAnalyticsSystemProperties, PHPhotoLibrary, CPAnalyticsDestinationsRegistry, NSObject;
@protocol OS_dispatch_queue;

@interface CPAnalytics : NSObject

@property (class, readonly, nonatomic) BOOL isAllowed;

@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) CPAnalyticsDestinationsRegistry *registry;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventsQueue;
@property (readonly) long long signpostUniqueValue;
@property (readonly, nonatomic) CPAnalyticsSystemProperties *systemProperties;

+ (void)sendEvent:(id)a0 withPayload:(id)a1;
+ (void)addDestination:(id)a0;
+ (id)systemPropertyForKey:(id)a0;
+ (id)creationDateForSignpost:(long long)a0;
+ (long long)startSignpost;
+ (id)bucketNameForDouble:(double)a0 bucketLimits:(id)a1 numberFormatter:(id)a2;
+ (void)removeDestination:(id)a0;
+ (id)_sharedInstance;
+ (void)startViewTracking;
+ (void)releasePhotoLibrary;
+ (void)endSignpost:(long long)a0 forEventName:(id)a1 withPayload:(id)a2;
+ (void)setupWithConfigurationFilename:(id)a0 inBundle:(id)a1;
+ (void)setupWithConfigurationAtURL:(id)a0;
+ (void)setupSystemPropertyProvidersForLibrary:(id)a0;
+ (void)activateEventQueue;
+ (void)updateWithConfigurationFilename:(id)a0 inBundle:(id)a1;
+ (void)startAppTracking;
+ (id)bucketNameForInteger:(long long)a0 bucketLimits:(long long)a1;

- (void)sendEvent:(id)a0 withPayload:(id)a1;
- (void)addDestination:(id)a0;
- (long long)startSignpost;
- (long long)_generateNextSignpostID;
- (void)removeDestination:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)releasePhotoLibrary;
- (void)_setupSystemPropertyProviders;
- (void)endSignpost:(long long)a0 forEventName:(id)a1 withPayload:(id)a2;
- (void)setupWithConfigurationFilename:(id)a0 inBundle:(id)a1;
- (void)setupWithConfigurationAtURL:(id)a0;
- (void)setupSystemPropertyProvidersForLibrary:(id)a0;
- (void)activateEventQueue;
- (void)updateWithConfigurationFilename:(id)a0 inBundle:(id)a1;

@end
