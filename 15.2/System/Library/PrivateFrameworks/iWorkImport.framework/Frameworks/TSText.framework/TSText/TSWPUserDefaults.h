@interface TSWPUserDefaults : NSObject

+ (void)initialize;
+ (BOOL)underlineLinks;
+ (void)setUnderlineLinks:(BOOL)a0;
+ (unsigned long long)minimumFontSize;
+ (unsigned long long)maximumFontSize;
+ (id)invisiblesColor;
+ (BOOL)p_UserDefaultSet:(id)a0 force:(BOOL)a1;
+ (void)setAutomaticallyDetectLinks:(BOOL)a0;
+ (void)setAutomaticallyDetectLists:(BOOL)a0;
+ (void)setSuperscriptNumericalSuffixes:(BOOL)a0;
+ (void)setSpellCheckingEnabled:(BOOL)a0;
+ (BOOL)automaticallyDetectLinks;
+ (BOOL)automaticallyDetectLists;
+ (BOOL)superscriptNumericalSuffixes;
+ (BOOL)spellCheckingEnabled;
+ (void)setInvisiblesColor:(id)a0;
+ (void)registerUserDefaults:(BOOL)a0;
+ (BOOL)p_cachedBoolForKey:(id)a0;
+ (BOOL)spellCheckingAllowed;
+ (id)appReplacementsDictionary;
+ (BOOL)automaticTextReplacement;
+ (BOOL)automaticallyFormatFractions;
+ (id)p_caseInsensitiveDictionary:(id)a0 mergedWithDictionary:(id)a1;
+ (void)p_defaultsChanged:(id)a0;
+ (BOOL)automaticallyDetectPhoneLinks;
+ (BOOL)shouldShowInvisibles;
+ (BOOL)automaticDashSubstitution;
+ (BOOL)automaticQuoteSubstitution;
+ (BOOL)showsQuickFormatBar;
+ (void)setShowsQuickFormatBar:(BOOL)a0;
+ (id)quotesArrayForLanguage:(id)a0;
+ (id)replacementsDictionaryAllowingFractions:(BOOL)a0;
+ (void)setReplacementsDictionary:(id)a0;
+ (void)setAutomaticallyDetectPhoneLinks:(BOOL)a0;
+ (void)setAutomaticallyFormatFractions:(BOOL)a0;
+ (void)setAutomaticDashSubstitution:(BOOL)a0;
+ (void)setAutomaticQuoteSubstitution:(BOOL)a0;
+ (void)setAutomaticTextReplacement:(BOOL)a0;
+ (BOOL)allowsFontSmoothing;

@end
