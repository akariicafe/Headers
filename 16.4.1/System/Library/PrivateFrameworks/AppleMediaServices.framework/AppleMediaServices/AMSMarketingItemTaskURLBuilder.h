@class NSString, AMSBagKeySet;

@interface AMSMarketingItemTaskURLBuilder : NSObject <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_additionalQueryItems;
- (id)_countryCodeFromBag:(id)a0;
- (id)_formattedURLPathWithBag:(id)a0;
- (id)_languageTagFromBag:(id)a0 fallback:(id)a1;
- (id)_realmOverridesFromBag:(id)a0;
- (id)_stringForKey:(id)a0 fromBag:(id)a1;
- (id)_urlPathFromBag:(id)a0;
- (id)urlWithServiceType:(id)a0 placement:(id)a1 bag:(id)a2 hydrateRelatedContents:(BOOL)a3 offerHints:(id)a4 additionalParameters:(id)a5;

@end
