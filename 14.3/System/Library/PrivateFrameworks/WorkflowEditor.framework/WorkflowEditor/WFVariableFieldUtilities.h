@interface WFVariableFieldUtilities : NSObject

+ (BOOL)clipboardContainsVariableString;
+ (BOOL)pasteboardContainsVariableString:(id)a0;
+ (void)copyVariableString:(id)a0 toPasteboard:(id)a1;
+ (id)variableStringFromPasteboard:(id)a0 withVariableProvider:(id)a1;
+ (void)cut:(id)a0 fromField:(id)a1;
+ (void)copy:(id)a0 fromField:(id)a1;
+ (void)paste:(id)a0 intoField:(id)a1;

@end
