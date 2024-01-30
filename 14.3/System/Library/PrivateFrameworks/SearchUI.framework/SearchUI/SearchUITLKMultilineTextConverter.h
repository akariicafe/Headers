@interface SearchUITLKMultilineTextConverter : NSObject

+ (id)textForSearchUIString:(id)a0;
+ (id)richTextForSearchUIText:(id)a0;
+ (id)textForSearchUIText:(id)a0;
+ (id)richTextForSearchUIText:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (BOOL)richTextOverridesAsyncLoader:(id)a0;
+ (void)applyRichText:(id)a0 toTLKRichText:(id)a1 isAsync:(BOOL)a2;
+ (id)formattedTextForSearchUIText:(id)a0;

@end
