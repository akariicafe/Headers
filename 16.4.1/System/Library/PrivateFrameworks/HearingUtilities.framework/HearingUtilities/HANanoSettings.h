@class NPSDomainAccessor;

@interface HANanoSettings : HUHearingAidSettings

@property (retain, nonatomic) NPSDomainAccessor *domainAccessor;
@property (retain, nonatomic) NPSDomainAccessor *globalDomainAccessor;

+ (id)sharedInstance;

- (id)currentLocale;
- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (void)pairedWatchDidChange:(id)a0;
- (BOOL)shouldUseiCloud;
- (void)dealloc;
- (id)_valueForPreferenceKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)nanoDomainAccessor;

@end
