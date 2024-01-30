@class _CDInteractionStore, _PSContactCache;

@interface _PSFTZKWSuggestionsTransformerFactory : NSObject {
    _PSContactCache *_contactCache;
}

@property (readonly, copy, nonatomic) _CDInteractionStore *interactionStore;

+ (id)getResultsFromTransformers:(id)a0 suggestions:(id)a1;
+ (id)getCraftedIdentfierForSuggestion:(id)a0;

- (BOOL)isEligibleRecipient:(id)a0;
- (id /* block */)deduplicateWithMaxSuggestions:(unsigned long long)a0;
- (id /* block */)filterIDSReachable;
- (void).cxx_destruct;
- (id /* block */)mapRecipientsToContactsWithUnmapped:(BOOL)a0;
- (id)init;
- (id)formatWithSuggestion:(id)a0 bundleIdsForGroupMatching:(id)a1 checkForMessagesGroupIdentifier:(BOOL)a2;
- (id)initWithInteractionStore:(id)a0;
- (id /* block */)deduplicateWithSeedRecipients:(id)a0;
- (id /* block */)formatWithBundleIdsForGroupMatching:(id)a0;
- (id /* block */)annotateWithTrialExperimentIdentifiers:(id)a0 rolloutIdentifiers:(id)a1;

@end
