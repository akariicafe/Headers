@class NSDictionary, _PASNotificationToken, NSRegularExpression;

@interface SGReminderExtractionModel : SGExtractionModel {
    _PASNotificationToken *_assetUpdateToken;
    NSDictionary *_enrichments;
    NSDictionary *_inputTokenMapping;
    NSDictionary *_outputConfig;
    NSDictionary *_reminderOverrides;
    NSRegularExpression *_whitelistRegex;
}

+ (id)sharedInstance;
+ (id)enrichTaggedCharacterRangesWithModelOutput:(id)a0 usingInputCharacterRanges:(id)a1;
+ (id)inputFromTaggedCharacterRanges:(id)a0 usingTokenMapping:(id)a1 forModel:(id)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)loadModel;
- (id)_init;
- (id)enrichments;
- (id)modelDescription;
- (void)updateAll;
- (id)modelInferences:(id)a0;
- (id)reminderOverrides;
- (id)inputTokenMapping;
- (id)outputConfig;
- (BOOL)hasWhitelistedVerbInContent:(id)a0;
- (id)whitelistedVerbInContent:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_whitelistedVerbRangeInContent:(id)a0;
- (id)whitelistedRangesInContent:(id)a0;
- (void)setReminderOverridesForTesting:(id)a0;

@end
