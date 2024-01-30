@class CPAnalyticsSystemProperties, PHPhotoLibrary, CPAnalyticsDestinationsRegistry, NSObject;
@protocol OS_dispatch_queue;

@interface CPAnalytics : NSObject {
    long long _signpostUniqueValue;
}

@property (class, readonly, nonatomic) BOOL isAllowed;

@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) CPAnalyticsDestinationsRegistry *registry;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventsQueue;
@property (readonly, nonatomic) CPAnalyticsSystemProperties *systemProperties;

+ (id)sharedInstance;
+ (id)systemPropertyForKey:(id)a0;
+ (id)creationDateForSignpost:(long long)a0;
+ (void)setupSystemPropertyProvidersForLibrary:(id)a0;
+ (long long)startSignpost;
+ (void)addDestination:(id)a0;
+ (void)setupWithConfigurationAtURL:(id)a0;
+ (void)startAppTracking;
+ (void)sendEvent:(id)a0 withPayload:(id)a1;
+ (void)releasePhotoLibrary;
+ (id)bucketNameForInteger:(long long)a0 bucketLimits:(long long)a1;
+ (void)startViewTracking;
+ (void)setupWithConfigurationFilename:(id)a0 inBundle:(id)a1;
+ (id)bucketNameForDouble:(double)a0 bucketLimits:(id)a1 numberFormatter:(id)a2;
+ (void)removeDestination:(id)a0;
+ (void)endSignpost:(long long)a0 forEventName:(id)a1 withPayload:(id)a2;
+ (void)activateEventQueue;
+ (void)updateWithConfigurationFilename:(id)a0 inBundle:(id)a1;

- (void)setupSystemPropertyProvidersForLibrary:(id)a0;
- (long long)startSignpost;
- (void)addDestination:(id)a0;
- (void)setupWithConfigurationAtURL:(id)a0;
- (void)sendEvent:(id)a0 withPayload:(id)a1;
- (void)releasePhotoLibrary;
- (long long)generateNextSignpostID;
- (void)setupWithConfigurationFilename:(id)a0 inBundle:(id)a1;
- (void)removeDestination:(id)a0;
- (id)init;
- (void)endSignpost:(long long)a0 forEventName:(id)a1 withPayload:(id)a2;
- (void)_setupSystemPropertyProviders;
- (void)activateEventQueue;
- (void)updateWithConfigurationFilename:(id)a0 inBundle:(id)a1;
- (void).cxx_destruct;

@end
