@class WLKBasicEpisodeMetadata, NSString, NSDictionary, NSArray;

@interface WLKCanonicalContainerResponse : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) NSString *canonicalID;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, nonatomic, getter=isWatchListable) BOOL watchListable;
@property (readonly, nonatomic, getter=isWatchListed) BOOL watchListed;
@property (readonly, copy, nonatomic) WLKBasicEpisodeMetadata *currentEpisode;
@property (readonly, copy, nonatomic) NSDictionary *defaultSeason;
@property (readonly, copy, nonatomic) NSArray *channels;

+ (id)parseChannelsFromPayload:(id)a0;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
