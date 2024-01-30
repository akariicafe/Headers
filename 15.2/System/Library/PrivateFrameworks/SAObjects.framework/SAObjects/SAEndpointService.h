@class NSString;

@interface SAEndpointService : SAEndpoint

@property (copy, nonatomic) NSString *serverUrl;

+ (id)endpointService;
+ (id)endpointServiceWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
