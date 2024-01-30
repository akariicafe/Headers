@class NSString, ICQInAppMessaging;

@interface DOCICloudQuotaInAppMessaging : NSObject

@property (class, readonly) DOCICloudQuotaInAppMessaging *shared;
@property (class, readonly) NSString *currentInAppMessageChangedNotification;

@property (readonly, nonatomic) ICQInAppMessaging *messaging;

+ (void)preloadICloudQuotaLibrary;

- (id)init;
- (void).cxx_destruct;
- (id)fetchMessageFromNotification:(id)a0;
- (void)startObservingUpdates;
- (void)stopObservingUpdates;

@end
