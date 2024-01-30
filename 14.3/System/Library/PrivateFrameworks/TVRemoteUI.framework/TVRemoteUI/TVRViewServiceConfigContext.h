@class NSString, NSDictionary;

@interface TVRViewServiceConfigContext : NSObject

@property (nonatomic) unsigned long long dismissalType;
@property (copy, nonatomic) NSString *lastActiveEndpointIdentifier;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) long long deviceIdentifierType;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) long long launchContext;
@property (copy, nonatomic) id /* block */ presentationAnimations;
@property (copy, nonatomic) id /* block */ dismissalAnimations;

- (void)_commonInit;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)_initWithUserInfo:(id)a0;
- (id)initWithDeviceIdentifier:(id)a0 identifierType:(long long)a1 deviceType:(long long)a2 launchContext:(long long)a3;
- (id)_initWithLaunchContext:(long long)a0;
- (id)initWithDeviceIdentifier:(id)a0 type:(long long)a1;

@end
