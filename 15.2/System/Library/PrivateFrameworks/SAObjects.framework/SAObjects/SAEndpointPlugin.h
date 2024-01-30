@class NSString;

@interface SAEndpointPlugin : SAEndpoint

@property (copy, nonatomic) NSString *pluginPath;

+ (id)endpointPlugin;
+ (id)endpointPluginWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
