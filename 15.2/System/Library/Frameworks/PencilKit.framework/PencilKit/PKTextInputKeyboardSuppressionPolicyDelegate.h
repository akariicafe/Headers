@class NSString;

@interface PKTextInputKeyboardSuppressionPolicyDelegate : NSObject <_UIKeyboardSuppressionPolicyDelegate, PKTextInputSupportedElementDelegate> {
    BOOL _isQueryingLocaleIdentifier;
}

@property (nonatomic) BOOL _suppressLocaleIdentifier;
@property (nonatomic) BOOL allowFloatingPencilKeyboard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)keyboardHasInputOrAssistantViewsOnScreen;

- (BOOL)_shouldSuppressAssistantBarForDelegate:(id)a0;
- (id)_recognitionLocaleIdentifier;
- (BOOL)_shouldSuppressForDelegate:(id)a0;
- (void)updateKeyboardSuppressionPolicy;
- (BOOL)isSupportedForTextInputTraits:(id)a0;
- (BOOL)_shouldSuppressKeyboardUIForDelegate:(id)a0 checkSource:(BOOL)a1;

@end
