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

- (id)deleteDataDerivedFromContentMatchingRequest:(id)a0;
- (id)consumerName;
- (id)initWithEntityStore:(id)a0;
- (BOOL)_shouldProcessSearchableItem:(id)a0;
- (id)setup;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0;
- (id)extractURLsFromAttributesOfItem:(id)a0 handle:(id)a1;
- (id)_consumeContentParts:(id)a0 title:(id)a1 fromHandle:(id)a2 documentDate:(id)a3 isOutgoingDocument:(BOOL)a4 uniqueIdentifier:(id)a5 domainIdentifier:(id)a6 bundleIdentifier:(id)a7 context:(id)a8;
- (id)init;
- (id)_urlContainerFromText:(id)a0 documentDate:(id)a1 documentTitle:(id)a2 handle:(id)a3 isOutgoingDocument:(BOOL)a4 uniqueIdentifier:(id)a5 domainIdentifier:(id)a6 bundleIdentifier:(id)a7;
- (id)extractURLsFromTextPropertiesOfItem:(id)a0 handle:(id)a1;
- (id)processSearchableItem:(id)a0;
- (id)consumeRemindersContentWithContext:(id)a0;
- (void).cxx_destruct;

@end
