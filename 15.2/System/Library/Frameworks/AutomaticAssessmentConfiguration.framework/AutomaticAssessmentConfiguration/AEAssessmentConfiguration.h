@class NSDictionary, AEAssessmentParticipantConfiguration;

@interface AEAssessmentConfiguration : NSObject <NSCopying>

@property (nonatomic) unsigned long long autocorrectMode;
@property (nonatomic) BOOL allowsSpellCheck;
@property (nonatomic) BOOL allowsPredictiveKeyboard;
@property (nonatomic) BOOL allowsKeyboardShortcuts;
@property (nonatomic) BOOL allowsActivityContinuation;
@property (nonatomic) BOOL allowsDictation;
@property (nonatomic) BOOL allowsAccessibilitySpeech;
@property (nonatomic) BOOL allowsPasswordAutoFill;
@property (nonatomic) BOOL allowsContinuousPathKeyboard;
@property (readonly, nonatomic) AEAssessmentParticipantConfiguration *mainParticipantConfiguration;
@property (readonly, copy, nonatomic) NSDictionary *configurationsByApplication;

+ (id)instanceFromBackingConfiguration:(id)a0;

- (id)backingValue;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
