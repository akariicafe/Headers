@class NSString, VSOptional;

@interface VSAccountAuthentication : NSObject

@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) VSOptional *authenticationToken;
@property (copy, nonatomic) NSString *appBundleIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
