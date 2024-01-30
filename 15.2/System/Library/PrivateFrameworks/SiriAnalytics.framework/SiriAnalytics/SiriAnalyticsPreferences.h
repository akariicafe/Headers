@interface SiriAnalyticsPreferences : NSObject {
    struct __CFString { } *_domain;
}

- (BOOL)tailMessagesToOSLogEnabled;
- (id)init;
- (id)initWithPreferencesDomain:(struct __CFString { } *)a0;
- (void)synchronize;

@end
