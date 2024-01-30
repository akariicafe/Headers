@interface WBSFormToABBinder : NSObject

+ (struct __WBSFieldLabelPatternMatcherArray { } *)addressBookFieldLabelPatternMatchers;
+ (id)allSynonymsForMatch:(id)a0 formAppearsToBeChinese:(BOOL)a1;
+ (struct __WBSFieldLabelPatternMatcherArray { } *)emailFieldLabelPatternMatchers;
+ (unsigned long long)indexOfBestMatchForString:(id)a0 inArray:(id)a1 startingPosition:(unsigned long long *)a2;
+ (id)specifierForAutocompleteToken:(id)a0;
+ (id)specifierForLabel:(id)a0;

@end
