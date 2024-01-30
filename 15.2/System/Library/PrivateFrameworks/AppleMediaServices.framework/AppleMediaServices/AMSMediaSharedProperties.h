@class AMSURLSession, NSMapTable, NSObject;
@protocol OS_dispatch_queue, AMSMediaTokenServiceProtocol;

@interface AMSMediaSharedProperties : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (class, readonly, nonatomic) NSMapTable *sharedPropertiesMapTable;

@property (readonly, nonatomic) AMSURLSession *session;
@property (readonly, nonatomic) id<AMSMediaTokenServiceProtocol> tokenService;

+ (id)propertiesForMarketingItemTask:(id)a0;
+ (id)propertiesForMediaTask:(id)a0;
+ (id)_propertiesForClientIdentifier:(id)a0 account:(id)a1 bag:(id)a2 clientInfo:(id)a3 URLKnownToBeTrusted:(BOOL)a4;
+ (id)propertiesForRatingsTask:(id)a0;
+ (id)propertiesForStorefrontsTask:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_initWithClientIdentifier:(id)a0 account:(id)a1 bag:(id)a2 clientInfo:(id)a3 URLKnownToBeTrusted:(BOOL)a4;

@end
