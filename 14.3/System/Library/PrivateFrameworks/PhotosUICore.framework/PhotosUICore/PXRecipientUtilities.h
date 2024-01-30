@interface PXRecipientUtilities : NSObject

+ (id)composeRecipientForPersonSuggestion:(id)a0;
+ (id)composeRecipientForContact:(id)a0;
+ (id)composeRecipientForAddress:(id)a0 kind:(long long)a1;
+ (id)composeRecipientForRecipient:(id)a0;
+ (BOOL)bootstrapPersonSuggestion:(id)a0 withContact:(id)a1 error:(id *)a2;
+ (void)_getAddressForContact:(id)a0 address:(id *)a1 addressKind:(unsigned long long *)a2;

@end
