@class NSURL;

@interface SAUIOpenLink : SABaseClientBoundCommand

@property (copy, nonatomic) NSURL *ref;

+ (id)openLink;
+ (id)openLinkWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
