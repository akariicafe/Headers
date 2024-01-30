@interface SAUITakeScreenshot : SABaseClientBoundCommand

@property (nonatomic) BOOL shouldHideSiri;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
