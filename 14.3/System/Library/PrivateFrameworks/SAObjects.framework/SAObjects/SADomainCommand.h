@class NSURL, NSNumber;

@interface SADomainCommand : SABaseClientBoundCommand

@property (copy, nonatomic) NSURL *targetAppId;
@property (copy, nonatomic) NSURL *targetPluginId;
@property (copy, nonatomic) NSNumber *timeout;

+ (id)domainCommand;
+ (id)domainCommandWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
