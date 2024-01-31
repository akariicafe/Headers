@class AEAssessmentIndividualConfiguration, NSMutableDictionary;

@interface AECAssessmentConfigurationWrapper : NSObject

@property (nonatomic) BOOL allowsAutoCorrection;
@property (nonatomic) BOOL allowsSmartPunctuation;
@property (nonatomic) BOOL allowsSpellCheck;
@property (nonatomic) BOOL allowsPredictiveKeyboard;
@property (nonatomic) BOOL allowsKeyboardShortcuts;
@property (nonatomic) BOOL allowsActivityContinuation;
@property (nonatomic) BOOL allowsDictation;
@property (nonatomic) BOOL allowsAccessibilitySpeech;
@property (nonatomic) BOOL allowsPasswordAutoFill;
@property (nonatomic) BOOL allowsContinuousPathKeyboard;
@property (copy, nonatomic) AEAssessmentIndividualConfiguration *mainIndividualConfiguration;
@property (copy, nonatomic) NSMutableDictionary *configurationsByApplicationDescriptor;

+ (id)wrapperFromConfiguration:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)makeConfiguration;

@end
