@class NSString, NSArray;

@interface SADPDevicePlaySound : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSArray *devices;

+ (id)devicePlaySound;
+ (id)devicePlaySoundWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
