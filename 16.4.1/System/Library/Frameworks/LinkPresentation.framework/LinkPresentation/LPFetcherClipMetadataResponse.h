@class NSURL, CPSClipMetadata;

@interface LPFetcherClipMetadataResponse : LPFetcherResponse

@property (readonly, copy, nonatomic) CPSClipMetadata *metadata;
@property (readonly, copy, nonatomic) NSURL *iconURL;

- (void).cxx_destruct;
- (id)initWithClipMetadata:(id)a0 iconURL:(id)a1 fetcher:(id)a2;

@end
