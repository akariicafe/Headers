@class NSString, SGTopicDissector;

@interface SGTopicExtractionPlugin : NSObject <FIAPPlugin> {
    SGTopicDissector *_dissector;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)getTextContentFromSearchableItem:(id)a0;

- (id)processSearchableItem:(id)a0;
- (id)setup;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)a0 domainIdentifiers:(id)a1;
- (id)extractionsFromText:(id)a0 bundleId:(id)a1;
- (id)_harvestPodcastsIntent:(id)a0 identifier:(id)a1 groupIdentifier:(id)a2;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)a0 uniqueIdentifiers:(id)a1;
- (BOOL)interestedInSearchableItem:(id)a0;
- (id)processInteraction:(id)a0 bundleIdentifier:(id)a1 protectionClass:(id)a2;
- (id)initWithTopicDissector:(id)a0;
- (void)extractAndDonateTopicsForText:(id)a0 isPlainText:(BOOL)a1 bundleId:(id)a2 groupId:(id)a3 documentId:(id)a4 contactHandles:(id)a5 weight:(double)a6 isOutgoing:(BOOL)a7;
- (id)extractionsFromSearchableItem:(id)a0;
- (BOOL)_shouldDeferProcessingSearchableItem:(id)a0;

@end
