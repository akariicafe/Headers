@class NSString, SGNamedEntityDissector;

@interface SGNamedEntityExtractionPlugin : NSObject <FIAPPlugin, HVNewsConsumer, HVNotesConsumer, HVRemindersConsumer, HVSafariConsumer, HVThirdPartyAppConsumer, HVInteractionConsumer, HVUserActivityConsumer> {
    SGNamedEntityDissector *_dissector;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)processSearchableItem:(id)a0;
- (id)extractionsFromSearchableItem:(id)a0;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0;
- (id)consumeSafariContentWithContext:(id)a0;
- (void)_writeAndFlushContainers:(id)a0;
- (id)consumeThirdPartyAppContentWithContext:(id)a0;
- (id)consumerName;
- (id)consumeNotesContentWithContext:(id)a0;
- (id)consumeNewsArticleViewsWithContext:(id)a0;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 domainIdentifiers:(id)a1;
- (id)processInteraction:(id)a0 bundleIdentifier:(id)a1 protectionClass:(id)a2;
- (id)_consumeContentParts:(id)a0 contentDataSource:(id)a1 uniqueIdentifier:(id)a2 domainIdentifier:(id)a3 bundleIdentifier:(id)a4 context:(id)a5;
- (id)deleteDataDerivedFromContentMatchingRequest:(id)a0;
- (id)consumeRemindersContentWithContext:(id)a0;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1;
- (id)_extractionsFromEntityContainers:(id)a0;
- (id)_extractionCountForContainers:(id)a0;
- (id)processUserAction:(id)a0 searchableItem:(id)a1;
- (id)consumeInteractionWithContext:(id)a0;
- (id)consumeUserActivityMetadataWithContext:(id)a0;
- (BOOL)_harvestMapsIntent:(id)a0 identifier:(id)a1 ignored:(BOOL *)a2 numberOfExtractons:(unsigned long long *)a3 error:(id *)a4;
- (id)initWithNamedEntityDissector:(id)a0;
- (BOOL)_harvestPodcastsIntent:(id)a0 identifier:(id)a1 groupIdentifier:(id)a2 ignored:(BOOL *)a3 numberOfExtractons:(unsigned long long *)a4 error:(id *)a5;
- (void)processTextContentItem:(id)a0;
- (id)extractionsFromUserAction:(id)a0 searchableItem:(id)a1;
- (id)entityContainersForUserActivity:(id)a0 documentId:(id)a1 searchableItem:(id)a2;
- (id)consumeSearchableUserActivityWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_shouldAcceptSearchableItem:(id)a0;
- (id)_entityContainersForContentItem:(id)a0;
- (id)_entityContainersForContent:(id)a0 contentDataSource:(id)a1 isOutgoing:(BOOL)a2 contactHandles:(id)a3 uniqueIdentifier:(id)a4 domainIdentifier:(id)a5 bundleIdentifier:(id)a6;
- (id)_entityContainersForUserAction:(id)a0 searchableItem:(id)a1;
- (BOOL)_processUserActivity:(id)a0 extractionContainer:(id)a1 rawTextOut:(id *)a2 language:(id)a3;
- (void)_processCSSearchableItemLocationWithName:(id)a0 thoroughfare:(id)a1 city:(id)a2 state:(id)a3 country:(id)a4 postalCode:(id)a5 latitude:(id)a6 longitude:(id)a7 extractionContainer:(id)a8;

@end
