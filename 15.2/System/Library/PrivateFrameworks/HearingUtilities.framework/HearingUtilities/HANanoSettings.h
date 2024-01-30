@class NPSDomainAccessor;

@interface HANanoSettings : AXHASettings

@property (retain, nonatomic) NPSDomainAccessor *domainAccessor;
@property (retain, nonatomic) NPSDomainAccessor *globalDomainAccessor;

+ (id)sharedInstance;

- (id)currentLocale;
- (id)nanoDomainAccessor;
- (BOOL)shouldUseiCloud;
- (void)_setValue:(id)a0 forPreferenceKey:(id)a1;
- (id)_valueForPreferenceKey:(id)a0;
- (void)pairedWatchDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
