@class NSArray;

@interface SAUIUnlockDevice : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *cancellationCommands;
@property (copy, nonatomic) NSArray *failureCommands;
@property (copy, nonatomic) NSArray *successCommands;

+ (id)unlockDeviceWithDictionary:(id)a0 context:(id)a1;
+ (id)unlockDevice;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
