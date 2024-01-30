@class UIResponder;
@protocol UITextInput;

@interface UITextLiveConversionInteraction : UITextInteraction {
    UIResponder<UITextInput> *_textInput;
    long long _panOffset;
}

@property (readonly) double pointSize;

- (void)_tap:(id)a0;
- (void)_pan:(id)a0;
- (void)willMoveToView:(id)a0;
- (void).cxx_destruct;
- (id)_liveConversionTapGestureRecognizer;
- (id)_liveConversionPanGestureRecognizer;
- (id)initWithTextInput:(id)a0;

@end
