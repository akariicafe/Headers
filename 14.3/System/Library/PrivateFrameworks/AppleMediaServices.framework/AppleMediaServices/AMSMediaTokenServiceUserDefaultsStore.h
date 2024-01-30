@class NSString;

@interface AMSMediaTokenServiceUserDefaultsStore : NSObject

@property (readonly, nonatomic) NSString *clientIdentifier;

- (void).cxx_destruct;
- (id)retrieveToken;
- (BOOL)storeToken:(id)a0;
- (id)initWithClientIdentifier:(id)a0;

@end
