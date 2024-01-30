@class LPVideo;

@interface LPFetcherVideoResponse : LPFetcherResponse

@property (readonly, retain, nonatomic) LPVideo *video;

+ (id)videoPropertiesForFetcher:(id)a0;

- (void).cxx_destruct;
- (id)initWithVideo:(id)a0 fetcher:(id)a1;

@end
