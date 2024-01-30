@protocol _UITextFieldVisualStyleSubject;

@interface _UITextFieldVisualStyle : NSObject

@property (weak, nonatomic) id<_UITextFieldVisualStyleSubject> styleSubject;

+ (id)inferredVisualStyleWithStyleSubject:(id)a0;

- (void)handleTextVibrancy;
- (void).cxx_destruct;
- (id)parentViewForTextContentView;
- (id)defaultFocusedTextColor;
- (BOOL)textShouldUseVibrancy;
- (id)placeholderColor;
- (id)initWithStyleSubject:(id)a0;
- (id)defaultTextColor;
- (id)defaultTextColorForKeyboardAppearance;

@end
