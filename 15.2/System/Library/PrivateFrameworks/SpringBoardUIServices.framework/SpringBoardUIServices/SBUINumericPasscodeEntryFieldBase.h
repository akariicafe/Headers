@class NSMutableCharacterSet;

@interface SBUINumericPasscodeEntryFieldBase : SBUIPasscodeEntryField {
    NSMutableCharacterSet *_numericTrimmingSet;
}

@property (nonatomic) unsigned long long maxNumbersAllowed;
@property (nonatomic) BOOL allowsNewlineAcceptance;
@property (nonatomic) BOOL autoAcceptWhenMaxNumbersMet;

+ (BOOL)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;

- (void)_appendString:(id)a0;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)a0;
- (void)_deleteLastCharacter;
- (BOOL)shouldInsertPasscodeText:(id)a0;
- (BOOL)_hasMaxDigitsSpecified;
- (void)_reallyAppendString:(id)a0;

@end
