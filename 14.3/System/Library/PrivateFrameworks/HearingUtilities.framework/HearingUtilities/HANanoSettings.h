@class NPSDomainAccessor;

@interface HANanoSettings : AXHASettings

@property (retain, nonatomic) NPSDomainAccessor *domainAccessor;
@property (retain, nonatomic) NPSDomainAccessor *globalDomainAccessor;

+ (id)sharedInstance;

- (id)_valueForPreferenceKey:(id)a0;
- (void)_setValue:(id)a0 forPreferenceKey:(id)a1;
- (id)currentLocale;
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldUseiCloud;
- (void)dealloc;
- (id)nanoDomainAccessor;
- (void)pairedWatchDidChange:(id)a0;

@end
