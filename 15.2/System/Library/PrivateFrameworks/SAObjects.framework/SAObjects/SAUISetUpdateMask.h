@interface SAUISetUpdateMask : SABaseClientBoundCommand

@property (nonatomic) BOOL shouldHideSiri;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
