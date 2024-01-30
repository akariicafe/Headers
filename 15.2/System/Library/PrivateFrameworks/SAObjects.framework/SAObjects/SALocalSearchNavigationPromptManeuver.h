@class NSNumber;

@interface SALocalSearchNavigationPromptManeuver : SADomainCommand

@property (copy, nonatomic) NSNumber *maneuverIndex;

+ (id)navigationPromptManeuver;
+ (id)navigationPromptManeuverWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
