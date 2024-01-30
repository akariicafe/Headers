@class NSString, SGSqlEntityStore, SGURLDissector;

@interface SGURLPlugin : NSObject <FIAPPlugin, HVRemindersConsumer> {
    SGSqlEntityStore *_entityStore;
    SGURLDissector *_urlDissector;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)processSearchableItem:(id)a0;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0;
- (id)consumerName;
- (id)initWithEntityStore:(id)a0;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 domainIdentifiers:(id)a1;
- (id)deleteDataDerivedFromContentMatchingRequest:(id)a0;
- (id)consumeRemindersContentWithContext:(id)a0;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1;
- (id)extractURLsFromAttributesOfItem:(id)a0 handle:(id)a1;
- (id)extractURLsFromTextPropertiesOfItem:(id)a0 handle:(id)a1;
- (id)setup;
- (id)_consumeContentParts:(id)a0 title:(id)a1 fromHandle:(id)a2 documentDate:(id)a3 isOutgoingDocument:(BOOL)a4 uniqueIdentifier:(id)a5 domainIdentifier:(id)a6 bundleIdentifier:(id)a7 context:(id)a8;
- (void).cxx_destruct;
- (id)init;
- (id)_urlContainerFromText:(id)a0 documentDate:(id)a1 documentTitle:(id)a2 handle:(id)a3 isOutgoingDocument:(BOOL)a4 uniqueIdentifier:(id)a5 domainIdentifier:(id)a6 bundleIdentifier:(id)a7;
- (BOOL)_shouldProcessSearchableItem:(id)a0;

@end
