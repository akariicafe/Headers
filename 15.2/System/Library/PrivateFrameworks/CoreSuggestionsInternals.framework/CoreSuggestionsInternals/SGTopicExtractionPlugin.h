@class NSString, SGTopicDissector;

@interface SGTopicExtractionPlugin : NSObject <FIAPPlugin, HVNewsConsumer, HVNotesConsumer, HVRemindersConsumer, HVSafariConsumer, HVThirdPartyAppConsumer, HVInteractionConsumer> {
    SGTopicDissector *_dissector;
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
- (id)_topicContainersForText:(id)a0 isPlainText:(BOOL)a1 bundleId:(id)a2 groupId:(id)a3 documentId:(id)a4 contactHandles:(id)a5 weight:(double)a6 isOutgoing:(BOOL)a7;
- (BOOL)interestedInSearchableItem:(id)a0;
- (id)consumeInteractionWithContext:(id)a0;
- (id)setup;
- (BOOL)_interestedInTitle:(id)a0 content:(id)a1 isReaderText:(BOOL)a2 uniqueIdentifier:(id)a3 bundleIdentifier:(id)a4;
- (BOOL)_harvestPodcastsIntent:(id)a0 identifier:(id)a1 groupIdentifier:(id)a2 ignored:(BOOL *)a3 numberOfExtractons:(unsigned long long *)a4 error:(id *)a5;
- (void).cxx_destruct;
- (void)extractAndDonateTopicsForText:(id)a0 isPlainText:(BOOL)a1 bundleId:(id)a2 groupId:(id)a3 documentId:(id)a4 contactHandles:(id)a5 weight:(double)a6 isOutgoing:(BOOL)a7;
- (id)extractionsFromText:(id)a0 bundleId:(id)a1;
- (id)init;
- (id)initWithTopicDissector:(id)a0;
- (BOOL)_shouldDeferProcessingSearchableItem:(id)a0;

@end
