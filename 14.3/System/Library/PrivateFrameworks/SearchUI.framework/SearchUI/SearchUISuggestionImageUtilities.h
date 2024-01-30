@interface SearchUISuggestionImageUtilities : NSObject

+ (void)initialize;
+ (void)resetSizes;
+ (id)symbolImageForSuggestionType:(int)a0;
+ (unsigned long long)currentWebSuggestionIconPref;
+ (id)appIconImageForBundleIdentifier:(id)a0;
+ (id)suggestionSymbolImageWithSymbolName:(id)a0;
+ (struct CGSize { double x0; double x1; })maximumSize;
+ (id)imageForSuggestionCardSection:(id)a0;

@end
