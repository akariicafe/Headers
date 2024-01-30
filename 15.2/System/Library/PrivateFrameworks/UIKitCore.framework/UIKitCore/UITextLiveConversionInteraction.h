@class UIResponder;
@protocol UITextInput;

@interface UITextLiveConversionInteraction : UITextInteraction {
    UIResponder<UITextInput> *_textInput;
    long long _panOffset;
}

@property (readonly) double pointSize;

- (void)_tap:(id)a0;
- (void)_pan:(id)a0;
- (id)initWithTextInput:(id)a0;
- (void)willMoveToView:(id)a0;
- (id)_liveConversionTapGestureRecognizer;
- (id)_liveConversionPanGestureRecognizer;
- (void).cxx_destruct;

@end
