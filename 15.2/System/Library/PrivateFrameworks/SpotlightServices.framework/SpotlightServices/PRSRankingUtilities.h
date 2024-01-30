@interface PRSRankingUtilities : NSObject

+ (void)computeDateCountsForDates:(id)a0 countLastYear:(unsigned long long *)a1 countLastMonth:(unsigned long long *)a2 countLastWeek:(unsigned long long *)a3 countLastDay:(unsigned long long *)a4 currentTime:(double)a5;
+ (float)floatValue:(float)a0 withSigFigs:(long long)a1;
+ (BOOL)somePotentialPhoneNumbersInString:(id)a0;
+ (id)onlyPotentialPhoneNumbersInString:(id)a0;
+ (BOOL)userQueryHasOnlySingleCharacterTerms:(id)a0;
+ (BOOL)caseAndDiacriticInsensitiveLocalizedString:(id)a0 isEqualToString:(id)a1;
+ (BOOL)aToZInString:(id)a0;
+ (BOOL)userQueryTermsHasOnlySingleCharacterTerms:(id)a0;
+ (BOOL)multiWordString:(id)a0 hasPrefix:(id)a1;
+ (BOOL)caseAndDiacriticInsensitiveLocalizedString:(id)a0 hasPrefix:(id)a1 locale:(id)a2;
+ (BOOL)caseAndDiacriticInsensitiveLocalizedString:(id)a0 containsString:(id)a1 locale:(id)a2;
+ (id)categoryForBundleID:(id)a0;
+ (id)bundleIDForCategory:(id)a0;

@end
