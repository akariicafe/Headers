@interface TIKeyboardInputManager_zh_hant_Zhuyin : TIKeyboardInputManager_zh_Base

@property (nonatomic, getter=isDynamic) BOOL dynamic;
@property (nonatomic, getter=isAssertDefaultKeyPlane) BOOL assertDefaultKeyPlane;
@property (nonatomic) BOOL liveConversionForceEnabled;
@property (nonatomic) BOOL liveConversionForceDisabled;

- (BOOL)delayedCandidateList;
- (BOOL)usesLiveConversion;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)liveConversionEnabled;
- (unsigned long long)initialSelectedIndex;
- (void)commitComposition;
- (id)didAcceptCandidate:(id)a0;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (BOOL)keyboardConfigurationAssertDefaultKeyPlane;
- (id)keyboardConfigurationLayoutTag;
- (BOOL)supportsCandidateGeneration;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (void)syncToLayoutState:(id)a0;
- (id)validCharacterSetForAutocorrection;
- (id)composedTextForSelectedCandidate:(id)a0 remainingInput:(id)a1;
- (BOOL)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)a0;
- (BOOL)shouldInsertFirstToneMark;
- (BOOL)shouldInvokeLiveConverison:(id)a0;

@end
