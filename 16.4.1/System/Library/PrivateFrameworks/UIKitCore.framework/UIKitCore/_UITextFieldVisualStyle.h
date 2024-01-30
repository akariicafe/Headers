@protocol _UITextFieldVisualStyleSubject;

@interface _UITextFieldVisualStyle : NSObject

@property (weak, nonatomic) id<_UITextFieldVisualStyleSubject> styleSubject;

+ (id)inferredVisualStyleWithStyleSubject:(id)a0;

- (id)parentViewForTextContentView;
- (id)placeholderColor;
- (id)defaultTextColor;
- (void)handleTextVibrancy;
- (BOOL)textShouldUseVibrancy;
- (id)defaultFocusedTextColor;
- (id)defaultTextColorForKeyboardAppearance;
- (void).cxx_destruct;
- (id)initWithStyleSubject:(id)a0;

@end
