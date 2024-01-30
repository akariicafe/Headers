@class NSDictionary;

@interface AACClient.AECAssessmentConfiguration : NSObject {
    void /* unknown type, empty encoding */ configurationsByApplicationDescriptor;
    void /* unknown type, empty encoding */ _allowsAutoCorrection;
    void /* unknown type, empty encoding */ _allowsSmartPunctuation;
    void /* unknown type, empty encoding */ _allowsSpellCheck;
    void /* unknown type, empty encoding */ _allowsPredictiveKeyboard;
    void /* unknown type, empty encoding */ _allowsKeyboardShortcuts;
    void /* unknown type, empty encoding */ _allowsActivityContinuation;
    void /* unknown type, empty encoding */ _allowsDictation;
    void /* unknown type, empty encoding */ _allowsAccessibilitySpeech;
    void /* unknown type, empty encoding */ _allowsPasswordAutoFill;
    void /* unknown type, empty encoding */ _allowsContinuousPathKeyboard;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ mainIndividualConfiguration;
@property (nonatomic, copy) NSDictionary *configurationsByApplicationDescriptor;
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

- (id)init;
- (void).cxx_destruct;

@end
