@class NSString;

@interface SAIntentGroupSiriKitPluginSignal : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *bundleIdentifier;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)initWithBundleIdentifier:(id)a0;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
