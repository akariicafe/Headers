@class NSString;

@interface AMSMediaTokenServiceUserDefaultsStore : NSObject

@property (readonly, nonatomic) NSString *clientIdentifier;

- (BOOL)storeToken:(id)a0;
- (id)retrieveToken;
- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0;

@end
