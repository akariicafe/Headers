@interface CNKeyboardSettings : NSObject

+ (id)newKeyboardSettingsForProperty:(id)a0;
+ (long long)autocapitalizationTypeFromDictionary:(id)a0;
+ (long long)autocorrectionTypeFromDictionary:(id)a0;
+ (BOOL)contentsIsSingleValue:(id)a0;
+ (long long)keyboardTypeFromDictionary:(id)a0;
+ (BOOL)usesTextSuggestionDelegate:(id)a0;

@end
