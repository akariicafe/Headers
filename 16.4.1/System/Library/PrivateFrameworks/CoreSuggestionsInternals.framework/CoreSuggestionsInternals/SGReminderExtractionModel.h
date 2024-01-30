@class NSDictionary, _PASNotificationToken, _PASLock;

@interface SGReminderExtractionModel : SGExtractionModel {
    _PASNotificationToken *_assetUpdateToken;
    NSDictionary *_enrichments;
    NSDictionary *_inputTokenMapping;
    NSDictionary *_outputConfig;
    NSDictionary *_reminderOverrides;
    _PASLock *_lock;
}

+ (id)sharedInstance;
+ (id)enrichTaggedCharacterRangesWithModelOutput:(id)a0 usingInputCharacterRanges:(id)a1;
+ (id)inputFromTaggedCharacterRanges:(id)a0 usingTokenMapping:(id)a1 forModel:(id)a2;

- (id)modelDescription;
- (id)_init;
- (void)dealloc;
- (id)loadModel;
- (void).cxx_destruct;
- (void)setReminderOverridesForTesting:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_whitelistedVerbRangeInContent:(id)a0;
- (id)enrichments;
- (BOOL)hasWhitelistedVerbInContent:(id)a0;
- (id)inputTokenMapping;
- (id)modelInferences:(id)a0;
- (id)outputConfig;
- (id)reminderOverrides;
- (void)updateAll;
- (id)whitelistedRangesInContent:(id)a0;
- (id)whitelistedVerbInContent:(id)a0;

@end
