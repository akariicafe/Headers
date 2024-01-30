@protocol _UITextFieldVisualStyleSubject;

@interface _UITextFieldVisualStyle : NSObject

@property (weak, nonatomic) id<_UITextFieldVisualStyleSubject> styleSubject;

+ (id)inferredVisualStyleWithStyleSubject:(id)a0;

- (id)placeholderColor;
- (void)handleTextVibrancy;
- (id)defaultFocusedTextColor;
- (id)parentViewForTextContentView;
- (id)defaultTextColorForKeyboardAppearance;
- (BOOL)textShouldUseVibrancy;
- (void).cxx_destruct;
- (id)initWithStyleSubject:(id)a0;
- (id)defaultTextColor;

@end
