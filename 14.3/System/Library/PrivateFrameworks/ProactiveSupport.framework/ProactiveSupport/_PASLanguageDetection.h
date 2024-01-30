@interface _PASLanguageDetection : NSObject

+ (id)dominantLanguageTagFromLanguageTags:(id)a0;
+ (int)_languageIdForLanguageString:(id)a0;
+ (BOOL)_userIsMultilingual;
+ (id)userLanguagesWithKeyboardDefaults:(id)a0;
+ (id)_dominantLanguageTagFromTextWithMaxLength:(id)a0 maxLength:(unsigned long long)a1 minimumProbability:(double)a2 hints:(struct { int x0; float x1; } *)a3 hintsCount:(unsigned long long)a4;
+ (id)languageForLocaleIdentifier:(id)a0;
+ (id)detectLanguageFromTextHeuristically:(id)a0;
+ (id)dominantLanguageTagFromLanguageTags:(id)a0 minimumCount:(unsigned long long)a1 minimumAgreement:(double)a2;
+ (id)detectLanguageFromTextIfMultilingual:(id)a0;
+ (id)dominantLanguageTagFromText:(id)a0;
+ (id)_dominantLanguageTagFromTextWithMaxLength:(id)a0 maxLength:(unsigned long long)a1 minimumProbability:(double)a2;
+ (id)detectLanguageFromLanguageTags:(id)a0;
+ (id)languageStringForLanguageId:(int)a0;
+ (struct { int x0; float x1; } *)_hintsForLanguageIds:(id)a0 totalProbability:(float)a1;
+ (id)userLanguages;
+ (id)detectLanguageFromTextWithMaxLength:(id)a0 maxLength:(unsigned long long)a1 minimumProbability:(double)a2;
+ (id)defaultLanguage;
+ (id)detectLanguageFromTextHeuristicallyWithLanguages:(id)a0 languages:(id)a1 defaultLanguage:(id)a2;
+ (id)detectLanguageFromText:(id)a0;

@end
