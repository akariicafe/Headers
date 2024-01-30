@class NSArray;

@interface SAEHandleUnderstandingOutput : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *policyActionList;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
