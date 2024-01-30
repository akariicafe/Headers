@interface SAUIHideSiriOverlay : SABaseClientBoundCommand

@property (nonatomic) BOOL hideSnippets;

+ (id)hideSiriOverlay;
+ (id)hideSiriOverlayWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
