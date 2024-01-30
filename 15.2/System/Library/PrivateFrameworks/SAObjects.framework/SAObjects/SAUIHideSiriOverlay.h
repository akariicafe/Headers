@interface SAUIHideSiriOverlay : SABaseClientBoundCommand

@property (nonatomic) BOOL hideSnippets;

+ (id)hideSiriOverlay;
+ (id)hideSiriOverlayWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
