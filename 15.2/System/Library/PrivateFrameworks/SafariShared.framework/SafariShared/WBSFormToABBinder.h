@interface WBSFormToABBinder : NSObject

+ (id)specifierForLabel:(id)a0;
+ (id)allSynonymsForMatch:(id)a0 formAppearsToBeChinese:(BOOL)a1;
+ (id)specifierForAutocompleteToken:(id)a0;
+ (unsigned long long)indexOfBestMatchForString:(id)a0 inArray:(id)a1 startingPosition:(unsigned long long *)a2;
+ (struct __WBSFieldLabelPatternMatcherArray { } *)addressBookFieldLabelPatternMatchers;
+ (struct __WBSFieldLabelPatternMatcherArray { } *)emailFieldLabelPatternMatchers;

@end
