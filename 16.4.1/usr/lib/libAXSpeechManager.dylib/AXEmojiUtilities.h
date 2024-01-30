@interface AXEmojiUtilities : NSObject

+ (id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)a0 stringForPauses:(id)a1 language:(id)a2 rangeReplacements:(id)a3 appendEmojiSuffix:(BOOL)a4;
+ (void)_initializeEmojiStructures:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })emojiRangeFromString:(id)a0 withSearchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)enumerateEmojiCharactersInString:(id)a0 languageCode:(id)a1 withBlock:(id /* block */)a2;
+ (id)stringByRemovingEmojiCharacters:(id)a0;

@end
