@class NSDictionary, AEAssessmentParticipantConfiguration, NSMutableDictionary;

@interface AEAssessmentConfiguration : NSObject <NSCopying> {
    AEAssessmentParticipantConfiguration *_mainParticipantConfiguration;
    NSMutableDictionary *_backingConfiguratonsByApplication;
}

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

+ (id)configurationFromWrapper:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)removeApplication:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)configurationWrapper;
- (void)set__allowsAccessibilitySpeech:(BOOL)a0;
- (BOOL)__allowsAccessibilitySpeech;
- (BOOL)__allowsActivityContinuation;
- (BOOL)__allowsContinuousPathKeyboard;
- (BOOL)__allowsDictation;
- (BOOL)__allowsKeyboardShortcuts;
- (BOOL)__allowsPasswordAutoFill;
- (BOOL)__allowsPredictiveKeyboard;
- (BOOL)__allowsSpellCheck;
- (unsigned long long)__autocorrectMode;
- (id)__configurationsByApplication;
- (id)__mainParticipantConfiguration;
- (void)__removeApplication:(id)a0;
- (void)__setConfiguration:(id)a0 forApplication:(id)a1;
- (void)setConfiguration:(id)a0 forApplication:(id)a1;
- (void)set__allowsActivityContinuation:(BOOL)a0;
- (void)set__allowsContinuousPathKeyboard:(BOOL)a0;
- (void)set__allowsDictation:(BOOL)a0;
- (void)set__allowsKeyboardShortcuts:(BOOL)a0;
- (void)set__allowsPasswordAutoFill:(BOOL)a0;
- (void)set__allowsPredictiveKeyboard:(BOOL)a0;
- (void)set__allowsSpellCheck:(BOOL)a0;
- (void)set__autocorrectMode:(unsigned long long)a0;

@end
