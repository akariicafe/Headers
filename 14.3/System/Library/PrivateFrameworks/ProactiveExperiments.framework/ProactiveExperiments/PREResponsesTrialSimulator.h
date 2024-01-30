@class NSString;

@interface PREResponsesTrialSimulator : NSObject <PREResponsesTrialProtocol, PREResponsesMetricsProtocol>

@property (readonly, nonatomic) NSString *inferenceModelName;
@property (readonly, nonatomic) NSString *inferenceModelFilePath;
@property (readonly, nonatomic) NSString *inferenceModelConfigPath;
@property (readonly, nonatomic) NSString *espressoBinFilePath;
@property (readonly, nonatomic) NSString *lexiconFilePath;
@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) NSString *treatmentId;

- (id)init;
- (void).cxx_destruct;
- (void)registerResponsesGenerated:(id)a0;
- (void)registerResponseTapped:(id)a0;

@end
