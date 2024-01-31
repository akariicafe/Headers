@class NSDictionary;

@interface AACClient.AECAssessmentConfiguration : NSObject {
    void /* unknown type, empty encoding */ configurationsByApplicationDescriptor;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ mainIndividualConfiguration;
@property (nonatomic, copy) NSDictionary *configurationsByApplicationDescriptor;
@property (nonatomic) void /* unknown type, empty encoding */ allowsAutoCorrection;
@property (nonatomic) void /* unknown type, empty encoding */ allowsSmartPunctuation;
@property (nonatomic) void /* unknown type, empty encoding */ allowsSpellCheck;
@property (nonatomic) void /* unknown type, empty encoding */ allowsPredictiveKeyboard;
@property (nonatomic) void /* unknown type, empty encoding */ allowsKeyboardShortcuts;
@property (nonatomic) void /* unknown type, empty encoding */ allowsActivityContinuation;
@property (nonatomic) void /* unknown type, empty encoding */ allowsDictation;
@property (nonatomic) void /* unknown type, empty encoding */ allowsAccessibilitySpeech;
@property (nonatomic) void /* unknown type, empty encoding */ allowsPasswordAutoFill;
@property (nonatomic) void /* unknown type, empty encoding */ allowsContinuousPathKeyboard;

- (id)init;
- (void).cxx_destruct;

@end
