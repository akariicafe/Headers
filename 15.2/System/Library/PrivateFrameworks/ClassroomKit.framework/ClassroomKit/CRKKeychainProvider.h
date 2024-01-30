@protocol CRKKeychain;

@interface CRKKeychainProvider : NSObject

@property (class, readonly, nonatomic) CRKKeychainProvider *sharedProvider;

@property (readonly, nonatomic) id<CRKKeychain> keychain;

+ (id)makeKeychainForCurrentEnvironment;

- (void).cxx_destruct;
- (id)initWithKeychain:(id)a0;

@end
