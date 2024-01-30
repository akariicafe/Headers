@class NSNumber, UIView;
@protocol PKScribbleInteractionWrapper, UITextInput, UICoordinateSpace, NSCopying, NSObject;

@interface PKTextInputElement : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastKnownFrame;
    id<UICoordinateSpace> _coordinateSpace;
    BOOL __requestingPlaceholderSuppression;
    BOOL __waitingForMatchingDidFinishWriting;
    BOOL _legacyHasBeenFocusedWithinContainer;
    long long __elementType;
    id<UITextInput> _textInput;
    UIView *_elementTextInputView;
    id<PKScribbleInteractionWrapper> __viewScribbleInteraction;
    id<PKScribbleInteractionWrapper> __containerInteraction;
    long long __orderInContainer;
    NSNumber *_recognitionIdentifier;
    id<NSObject, NSCopying> _containerElementIdentifier;
}

- (BOOL)showSelectionCommands;
- (id)selectionHighlightColor;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_beginSuppressingFieldPlaceholder;
- (void)_finishSuppressingFieldPlaceholderIfNeeded;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })activePreviewRange;
- (BOOL)clearActivePreview;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionClipRectInCoordinateSpace:(id)a0;
- (void)notifyTextInputTextWillChange;
- (void)notifyTextInputTextDidChange;
- (void)swapWritingStateWithElement:(id)a0;
- (void)willBeginWriting;
- (void)didEndWriting;

@end
