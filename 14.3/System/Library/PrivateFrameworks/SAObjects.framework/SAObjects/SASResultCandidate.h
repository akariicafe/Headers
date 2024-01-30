@class NSNumber, SASRecognition, NSString;

@interface SASResultCandidate : SABaseClientBoundCommand

@property (copy, nonatomic) NSNumber *processedAudioDuration;
@property (retain, nonatomic) SASRecognition *recognition;
@property (copy, nonatomic) NSString *resultId;

+ (id)resultCandidate;
+ (id)resultCandidateWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
