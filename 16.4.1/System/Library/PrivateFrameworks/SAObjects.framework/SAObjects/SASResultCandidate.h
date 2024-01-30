@class SASRecognition, NSNumber, NSString;

@interface SASResultCandidate : SABaseClientBoundCommand

@property (retain, nonatomic) SASRecognition *filteredRecognition;
@property (copy, nonatomic) NSNumber *latticeRnnMitigatorCalibrationOffset;
@property (copy, nonatomic) NSNumber *latticeRnnMitigatorCalibrationScale;
@property (nonatomic) double latticeRnnMitigatorScore;
@property (nonatomic) double latticeRnnMitigatorThreshold;
@property (copy, nonatomic) NSNumber *processedAudioDuration;
@property (retain, nonatomic) SASRecognition *recognition;
@property (copy, nonatomic) NSString *resultId;
@property (copy, nonatomic) NSString *speechRecognitionTask;

+ (id)resultCandidate;
+ (id)resultCandidateWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
