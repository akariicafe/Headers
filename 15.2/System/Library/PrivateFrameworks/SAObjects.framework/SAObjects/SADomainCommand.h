@class NSURL, NSNumber;

@interface SADomainCommand : SABaseClientBoundCommand

@property (copy, nonatomic) NSURL *targetAppId;
@property (copy, nonatomic) NSURL *targetPluginId;
@property (copy, nonatomic) NSNumber *timeout;

+ (id)domainCommand;
+ (id)domainCommandWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
