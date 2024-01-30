@interface _ICLexiconUtilities : NSObject

+ (struct _LXEntry { } *)copyEntry:(struct _LXLexicon { } *)a0 forString:(id)a1;
+ (BOOL)lexiconContainsEntry:(struct _LXLexicon { } *)a0 forString:(id)a1;
+ (id)sortKeyEquivalents:(struct _LXLexicon { } *)a0 forString:(id)a1;

@end
