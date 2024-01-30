@class LPMediaAssetFetcher, AVAssetImageGenerator, LPLinkMetadata;

@interface LPStreamingMediaMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    BOOL _cancelled;
    LPMediaAssetFetcher *_fetcher;
    AVAssetImageGenerator *_videoImageGenerator;
    LPLinkMetadata *_metadata;
}

+ (id)specializedMetadataProviderForResourceWithContext:(id)a0;
+ (unsigned long long)specialization;

- (void)cancel;
- (void)fail;
- (void).cxx_destruct;
- (void)start;
- (void)done;

@end
