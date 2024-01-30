@class NPSDomainAccessor;

@interface RTTNanoSettings : RTTSettings

@property (retain, nonatomic) NPSDomainAccessor *domainAccessor;
@property (retain, nonatomic) NPSDomainAccessor *globalDomainAccessor;

+ (id)sharedInstance;

- (id)currentLocale;
- (id)valueForPreferenceKey:(id)a0 andContext:(id)a1;
- (id)uuidFromContext:(id)a0;
- (void)_setValue:(id)a0 forPreferenceKey:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
