@interface PKTextInputUtilities : NSObject

+ (BOOL)isResponderSupportedTextInput:(id)a0 outTextInputTraits:(id *)a1;
+ (id)textInputTraitsFromTextInput:(id)a0;
+ (BOOL)textInputTraitsAreSecure:(id)a0;
+ (id)_notesTextViewFromResponder:(id)a0;
+ (BOOL)isResponderSupportedTextInput:(id)a0;
+ (long long)responderTextInputSource:(id)a0;

@end
