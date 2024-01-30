@class LPAudio;

@interface LPFetcherAudioResponse : LPFetcherResponse

@property (readonly, retain, nonatomic) LPAudio *audio;

+ (id)audioPropertiesForFetcher:(id)a0;

- (void).cxx_destruct;
- (id)initWithAudio:(id)a0 fetcher:(id)a1;

@end
