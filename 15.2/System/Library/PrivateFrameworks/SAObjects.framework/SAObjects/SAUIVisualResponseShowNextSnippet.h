@class SAUIVisualResponseSnippet;

@interface SAUIVisualResponseShowNextSnippet : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIVisualResponseSnippet *visualResponse;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
