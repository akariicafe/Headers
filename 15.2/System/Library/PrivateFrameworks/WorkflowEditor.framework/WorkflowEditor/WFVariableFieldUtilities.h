@interface WFVariableFieldUtilities : NSObject

+ (void)copyVariableString:(id)a0 toPasteboard:(id)a1;
+ (BOOL)clipboardContainsVariableString;
+ (id)serializedVariableStringFromPasteboard:(id)a0;
+ (BOOL)pasteboardContainsVariableString:(id)a0;

@end
