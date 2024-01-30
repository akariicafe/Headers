@class NSObject;

@interface PSContactsPolicyController : NSObject

@property (retain, nonatomic) NSObject *controller;

- (id)initWithBundleIdentifier:(id)a0;
- (id)specifier;
- (void).cxx_destruct;
- (void)setAuthorizationLevel:(id)a0 forSpecifier:(id)a1;
- (id)authorizationLevelForSpecifier:(id)a0;

@end
