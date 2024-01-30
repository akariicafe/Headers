@class NSString;

@interface SAIntentGroupSiriKitPluginSignal : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *bundleIdentifier;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (id)initWithBundleIdentifier:(id)a0;
- (BOOL)mutatingCommand;

@end
