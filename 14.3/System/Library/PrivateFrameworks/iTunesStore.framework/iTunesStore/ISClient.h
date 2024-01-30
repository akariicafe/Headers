@class NSLock, NSString, NSDictionary;

@interface ISClient : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (copy) NSString *appleClientApplication;
@property (copy) NSString *userAgent;
@property (readonly) NSString *appleClientVersions;
@property (copy) NSString *identifier;
@property (copy) NSString *partnerHeader;
@property (copy) NSDictionary *clientProvidedHeaders;

+ (id)currentClient;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)localStoreFrontID;
- (void)_softwareMapInvalidatedNotification:(id)a0;
- (id)_appleClientVersions;

@end
