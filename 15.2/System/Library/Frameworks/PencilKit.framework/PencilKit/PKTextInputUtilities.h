@interface PKTextInputUtilities : NSObject

+ (BOOL)isResponderSupportedTextInput:(id)a0 outTextInputTraits:(id *)a1;
+ (id)textInputTraitsFromTextInput:(id)a0;
+ (BOOL)textInputTraitsAreSecure:(id)a0;
+ (id)_notesTextViewFromResponder:(id)a0;
+ (BOOL)isResponderSupportedTextInput:(id)a0;
+ (long long)responderTextInputSource:(id)a0;
+ (void)markAnalyticsForInsertionWithTexts:(id)a0 rangeToReplace:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)markAnalyticsForDeletionCount:(unsigned long long)a0 rangeToReplace:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)markAnalyticsForSelectionChange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 relativeRangeBefore:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)markAnalyticsForUndo;
+ (void)markAnalyticsForRedo;

@end
