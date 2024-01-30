@class NSMutableCharacterSet;

@interface SBUINumericPasscodeEntryFieldBase : SBUIPasscodeEntryField {
    NSMutableCharacterSet *_numericTrimmingSet;
}

@property (nonatomic) unsigned long long maxNumbersAllowed;
@property (nonatomic) BOOL allowsNewlineAcceptance;
@property (nonatomic) BOOL autoAcceptWhenMaxNumbersMet;

+ (BOOL)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;

- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (void)_appendString:(id)a0;
- (void)_deleteLastCharacter;
- (BOOL)_hasMaxDigitsSpecified;
- (void)_reallyAppendString:(id)a0;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)a0;
- (BOOL)shouldInsertPasscodeText:(id)a0;

@end
