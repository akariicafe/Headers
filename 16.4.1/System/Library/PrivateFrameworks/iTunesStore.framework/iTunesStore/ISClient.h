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
- (void)_softwareMapInvalidatedNotification:(id)a0;
- (void)dealloc;
- (id)init;
- (id)localStoreFrontID;
- (void).cxx_destruct;

@end
