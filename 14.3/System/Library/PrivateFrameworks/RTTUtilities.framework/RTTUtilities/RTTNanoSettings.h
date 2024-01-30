@class NPSDomainAccessor;

@interface RTTNanoSettings : RTTSettings

@property (retain, nonatomic) NPSDomainAccessor *domainAccessor;
@property (retain, nonatomic) NPSDomainAccessor *globalDomainAccessor;

+ (id)sharedInstance;

- (void)_setValue:(id)a0 forPreferenceKey:(id)a1;
- (id)currentLocale;
- (id)init;
- (void).cxx_destruct;
- (id)valueForPreferenceKey:(id)a0 andContext:(id)a1;
- (id)uuidFromContext:(id)a0;

@end
