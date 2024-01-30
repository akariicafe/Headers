@class NSString, SGNamedEntityDissector;

@interface SGNamedEntityExtractionPlugin : NSObject <FIAPPlugin> {
    SGNamedEntityDissector *_dissector;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)processSearchableItem:(id)a0;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1;
- (id)init;
- (id)_entityContainersForContentItem:(id)a0;
- (id)_extractionsFromEntityContainers:(id)a0;
- (void).cxx_destruct;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 domainIdentifiers:(id)a1;
- (id)_harvestPodcastsIntent:(id)a0 identifier:(id)a1 groupIdentifier:(id)a2;
- (id)processUserAction:(id)a0 searchableItem:(id)a1;
- (id)extractionsFromUserAction:(id)a0 searchableItem:(id)a1;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1;
- (id)_harvestMapsIntent:(id)a0 identifier:(id)a1;
- (id)processInteraction:(id)a0 bundleIdentifier:(id)a1 protectionClass:(id)a2;
- (id)_entityContainersForUserAction:(id)a0 searchableItem:(id)a1;
- (void)_processUserActivity:(id)a0 extractionContainer:(id)a1 language:(id)a2;
- (void)processTextContentItem:(id)a0;
- (id)extractionsFromSearchableItem:(id)a0;
- (void)_processCSSearchableItemLocationWithName:(id)a0 thoroughfare:(id)a1 city:(id)a2 state:(id)a3 country:(id)a4 postalCode:(id)a5 latitude:(id)a6 longitude:(id)a7 extractionContainer:(id)a8;
- (BOOL)_shouldAcceptSearchableItem:(id)a0;

@end
