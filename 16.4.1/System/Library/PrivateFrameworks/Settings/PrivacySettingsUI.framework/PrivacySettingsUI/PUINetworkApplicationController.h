@class NSString, LSApplicationProxy;

@interface PUINetworkApplicationController : PUINetworkController

@property (retain) NSString *bundleIdentifier;
@property (retain) LSApplicationProxy *application;

- (void)setSpecifier:(id)a0;
- (id)specifiers;
- (void).cxx_destruct;
- (id)isLocalNetworkEnabled:(id)a0;
- (void)setLocalNetworkEnabled:(id)a0 specifier:(id)a1;
- (id)pathRuleCreate:(BOOL)a0;

@end
