@class AMSURLSession, NSMapTable, NSObject;
@protocol OS_dispatch_queue, AMSMediaTokenServiceProtocol;

@interface AMSMediaSharedProperties : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (class, readonly, nonatomic) NSMapTable *sharedPropertiesMapTable;

@property (readonly, nonatomic) AMSURLSession *session;
@property (readonly, nonatomic) id<AMSMediaTokenServiceProtocol> tokenService;

+ (id)propertiesForMarketingItemTask:(id)a0;
+ (id)_propertiesForClientIdentifier:(id)a0 account:(id)a1 bag:(id)a2 clientInfo:(id)a3 URLKnownToBeTrusted:(BOOL)a4;
+ (id)propertiesForMediaTask:(id)a0;
+ (id)propertiesForMercuryCacheFetchTask:(id)a0;
+ (id)propertiesForNotificationSettingsTask:(id)a0;
+ (id)propertiesForRatingsTask:(id)a0;
+ (id)propertiesForStorefrontsTask:(id)a0;
+ (id)propertiesForUserNotificationSettingsTask:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_initWithClientIdentifier:(id)a0 account:(id)a1 bag:(id)a2 clientInfo:(id)a3 URLKnownToBeTrusted:(BOOL)a4;

@end
