@interface WFVariableFieldUtilities : NSObject

+ (BOOL)clipboardContainsVariableString;
+ (void)copyVariableString:(id)a0 toPasteboard:(id)a1;
+ (BOOL)pasteboardContainsVariableString:(id)a0;
+ (id)serializedVariableStringFromPasteboard:(id)a0;

@end
