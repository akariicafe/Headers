@class NSString, NSArray, NSNumber;

@interface SANPSetVolumeLevel : SABaseClientBoundCommand

@property (nonatomic) BOOL acknowledgedExceedingVolumeLimit;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSNumber *volumeValue;

+ (id)setVolumeLevel;
+ (id)setVolumeLevelWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
