@class NSString;

@interface SAIntentGroupSiriKitPluginSignal : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *bundleIdentifier;

- (id)encodedClassName;
- (id)initWithBundleIdentifier:(id)a0;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
