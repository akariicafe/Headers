@class NSURL;

@interface SAUIOpenLink : SABaseClientBoundCommand

@property (copy, nonatomic) NSURL *ref;

+ (id)openLinkWithDictionary:(id)a0 context:(id)a1;
+ (id)openLink;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
