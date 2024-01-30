@class UITextInputTraits, UIWKDocumentContext, PKTextInputElement, UIView, NSString;
@protocol UITextInput, UIWKInteractionViewProtocol;

@interface PKTextInputElementContent : NSObject {
    PKTextInputElement *_element;
    UITextInputTraits *_textInputTraits;
    long long _dataLoadedState;
    id<UITextInput> __textInput;
    UIView<UIWKInteractionViewProtocol> *__webDocumentSourceView;
    id<UITextInput> __webTextInput;
    UIWKDocumentContext *__webDocumentContext;
    NSString *__webComposedContextString;
}

- (id)description;
- (void).cxx_destruct;

@end
