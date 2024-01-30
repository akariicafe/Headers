@interface _KSTextReplacementHelper : NSObject

+ (void)logPhraseWordCount:(long long)a0;
+ (id)appleLanguagesPreference;
+ (id)errorWithCode:(long long)a0 failedAdds:(id)a1 failedDeletes:(id)a2;
+ (id)errorWithCode:(long long)a0 description:(id)a1;
+ (id)multipleAddErrors:(id)a0 removeErrors:(id)a1;
+ (long long)validateTextReplacement:(id)a0;
+ (id)transactionFromTextReplacementEntry:(id)a0 forDelete:(BOOL)a1;
+ (id)errorWithCode:(long long)a0 forEntry:(id)a1;
+ (id)errorStringForCode:(long long)a0;
+ (void)extractAggdMetricsForTextReplacement:(id)a0;
+ (id)aggdPrefix;
+ (id)fetchConfigurationPlist;
+ (id)sampleShortcut;
+ (id)textReplaceEntryFromTIDictionaryValue:(id)a0;
+ (void)fetchConfigurationPlistIfNeeded;
+ (void)logAggdValueForSyncIsPull:(BOOL)a0 success:(BOOL)a1;

@end
