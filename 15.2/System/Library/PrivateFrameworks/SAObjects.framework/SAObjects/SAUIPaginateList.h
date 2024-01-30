@interface SAUIPaginateList : SABaseClientBoundCommand

@property (nonatomic) BOOL forward;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
