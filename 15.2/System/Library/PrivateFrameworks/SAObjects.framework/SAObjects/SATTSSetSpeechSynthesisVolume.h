@class NSString, NSNumber;

@interface SATTSSetSpeechSynthesisVolume : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSNumber *volumeValue;

+ (id)setSpeechSynthesisVolume;
+ (id)setSpeechSynthesisVolumeWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
