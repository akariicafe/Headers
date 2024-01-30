@class NSObject;
@protocol OS_os_log;

@interface RMLog : NSObject

@property (class, readonly) NSObject<OS_os_log> *assetResolver;
@property (class, readonly) NSObject<OS_os_log> *configurationEventStreamSubscriber;
@property (class, readonly) NSObject<OS_os_log> *configurationStatusUpdater;
@property (class, readonly) NSObject<OS_os_log> *configurationSubscriberClient;
@property (class, readonly) NSObject<OS_os_log> *enrollmentController;
@property (class, readonly) NSObject<OS_os_log> *extensionConfigurationSubscriber;
@property (class, readonly) NSObject<OS_os_log> *extensionContext;
@property (class, readonly) NSObject<OS_os_log> *extensionRequestHandler;
@property (class, readonly) NSObject<OS_os_log> *extensionStatusPublisher;
@property (class, readonly) NSObject<OS_os_log> *httpLogging;
@property (class, readonly) NSObject<OS_os_log> *legacyProfilesFilter;
@property (class, readonly) NSObject<OS_os_log> *locations;
@property (class, readonly) NSObject<OS_os_log> *personaHelper;
@property (class, readonly) NSObject<OS_os_log> *profilesController;
@property (class, readonly) NSObject<OS_os_log> *unresolvedDataAsset;
@property (class, readonly) NSObject<OS_os_log> *unresolvedFileAsset;

@end
