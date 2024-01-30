@class LPLinkMetadata, LPURLFetcher;

@interface LPRedditMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    BOOL _cancelled;
    LPURLFetcher *_fetcher;
    LPLinkMetadata *_metadata;
    id /* block */ _completionHandler;
}

+ (unsigned long long)specialization;
+ (BOOL)generateSpecializedMetadataForCompleteMetadata:(id)a0 withContext:(id)a1 completionHandler:(id /* block */)a2;

- (void).cxx_destruct;

@end
