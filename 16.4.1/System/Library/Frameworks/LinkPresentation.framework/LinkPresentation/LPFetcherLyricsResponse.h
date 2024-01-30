@class LPLyricExcerptMetadata;

@interface LPFetcherLyricsResponse : LPFetcherResponse

@property (readonly, retain, nonatomic) LPLyricExcerptMetadata *lyrics;

- (void).cxx_destruct;
- (id)initWithLyrics:(id)a0 fetcher:(id)a1;

@end
