@class NSObject;
@protocol OS_os_log;

@interface RMStoreLog : NSObject

@property (class, readonly) NSObject<OS_os_log> *configurationSubscriberClient;
@property (class, readonly) NSObject<OS_os_log> *configurationSubscriberDelegate;
@property (class, readonly) NSObject<OS_os_log> *configurationSubscriberEventStream;
@property (class, readonly) NSObject<OS_os_log> *configurationSubscriberService;
@property (class, readonly) NSObject<OS_os_log> *statusPublisherDelegate;
@property (class, readonly) NSObject<OS_os_log> *statusPublisherDescription;

@end
