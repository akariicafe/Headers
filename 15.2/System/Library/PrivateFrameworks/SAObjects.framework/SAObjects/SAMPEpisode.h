@class NSString;

@interface SAMPEpisode : SAMPMediaItem

@property (nonatomic) long long episodeNumber;
@property (nonatomic) long long seasonNumber;
@property (nonatomic) long long showEpisodesCount;
@property (copy, nonatomic) NSString *showName;

+ (id)episode;
+ (id)episodeWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
