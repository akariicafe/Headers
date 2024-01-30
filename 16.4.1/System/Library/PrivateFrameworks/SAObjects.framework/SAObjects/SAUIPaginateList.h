@interface SAUIPaginateList : SABaseClientBoundCommand

@property (nonatomic) BOOL forward;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
