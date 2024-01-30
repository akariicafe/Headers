@class NSString;

@interface SALocalSearchSetNavigationVoiceVolume : SADomainCommand

@property (copy, nonatomic) NSString *volume;

+ (id)setNavigationVoiceVolume;
+ (id)setNavigationVoiceVolumeWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
