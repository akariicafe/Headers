@interface _KSTextReplacementHelper : NSObject

+ (id)sampleShortcut;
+ (id)transactionFromTextReplacementEntry:(id)a0 forDelete:(BOOL)a1;
+ (void)logAggdValueForSyncIsPull:(BOOL)a0 success:(BOOL)a1;
+ (void)extractAggdMetricsForTextReplacement:(id)a0;
+ (void)logPhraseWordCount:(long long)a0;
+ (long long)validateTextReplacement:(id)a0;
+ (id)errorWithCode:(long long)a0 failedAdds:(id)a1 failedDeletes:(id)a2;
+ (id)aggdPrefix;
+ (id)errorWithCode:(long long)a0 forEntry:(id)a1;
+ (id)textReplaceEntryFromTIDictionaryValue:(id)a0;
+ (id)multipleAddErrors:(id)a0 removeErrors:(id)a1;
+ (id)errorStringForCode:(long long)a0;
+ (void)fetchConfigurationPlistIfNeeded;
+ (id)appleLanguagesPreference;
+ (id)fetchConfigurationPlist;
+ (id)errorWithCode:(long long)a0 description:(id)a1;

@end
