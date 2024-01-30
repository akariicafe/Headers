@class UITextInputAssistantItem, UIView;

@interface DocumentManagerExecutables.DOCTypeToFocusController : UIResponder <UIKeyInput> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ typeToFocusInputBuffer;
    void /* unknown type, empty encoding */ typeToFocusTimeout;
    void /* unknown type, empty encoding */ typeToFocusInputView;
}

@property (nonatomic) long long autocorrectionType;
@property (nonatomic, readonly) UITextInputAssistantItem *inputAssistantItem;
@property (nonatomic, readonly) BOOL hasText;
@property (nonatomic, readonly) UIView *inputView;

- (void)deleteBackward;
- (void)insertText:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)typingTimeout;

@end
