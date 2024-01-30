@interface MCSingleAppModeConfiguration : NSObject

@property (nonatomic) BOOL allowSpellCheck;
@property (nonatomic) BOOL allowDefinitionLookup;
@property (nonatomic) BOOL allowSelectedTextSharing;
@property (nonatomic) BOOL allowAutoCorrection;
@property (nonatomic) BOOL allowPredictiveKeyboard;
@property (nonatomic) BOOL allowKeyboardShortcuts;
@property (nonatomic) BOOL allowActivityContinuation;
@property (nonatomic) BOOL allowDictation;
@property (nonatomic) BOOL allowScreenShot;
@property (nonatomic) BOOL allowSmartPuncutation;
@property (nonatomic) BOOL allowAccessibilitySpeech;
@property (nonatomic) BOOL allowPasswordAutoFill;
@property (nonatomic) BOOL allowContinuousPathKeyboard;
@property (nonatomic) BOOL allowTranslationLookup;
@property (nonatomic) BOOL allowQuickNote;

- (id)serializedConfiguration;

@end
