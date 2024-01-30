@class NSArray;

@interface SAUIUnlockDeviceWithWatch : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *failureCommands;
@property (copy, nonatomic) NSArray *successCommands;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
