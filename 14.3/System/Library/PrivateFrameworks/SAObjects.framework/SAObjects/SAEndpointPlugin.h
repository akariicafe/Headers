@class NSString;

@interface SAEndpointPlugin : SAEndpoint

@property (copy, nonatomic) NSString *pluginPath;

+ (id)endpointPlugin;
+ (id)endpointPluginWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
