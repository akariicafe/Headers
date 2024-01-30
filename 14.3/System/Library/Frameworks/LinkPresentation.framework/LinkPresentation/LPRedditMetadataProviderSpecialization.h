@class LPLinkMetadata, LPURLFetcher;

@interface LPRedditMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    BOOL _cancelled;
    LPURLFetcher *_fetcher;
    LPLinkMetadata *_metadata;
    id /* block */ _completionHandler;
}

+ (BOOL)generateSpecializedMetadataForCompleteMetadata:(id)a0 withContext:(id)a1 completionHandler:(id /* block */)a2;
+ (unsigned long long)specialization;

- (void).cxx_destruct;

@end
