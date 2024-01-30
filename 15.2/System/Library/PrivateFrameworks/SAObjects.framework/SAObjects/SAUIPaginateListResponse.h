@interface SAUIPaginateListResponse : SABaseClientBoundCommand

@property (nonatomic) long long firstItemIndex;
@property (nonatomic) long long focusedItemIndex;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
