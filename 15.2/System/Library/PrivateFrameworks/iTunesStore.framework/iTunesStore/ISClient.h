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

- (id)_appleClientVersions;
- (void).cxx_destruct;
- (id)init;
- (void)_softwareMapInvalidatedNotification:(id)a0;
- (void)dealloc;
- (id)localStoreFrontID;

@end
