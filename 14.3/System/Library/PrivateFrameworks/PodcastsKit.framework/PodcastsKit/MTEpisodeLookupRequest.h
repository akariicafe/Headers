@class NSString;

@interface MTEpisodeLookupRequest : NSObject

@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) long long storeTrackId;
@property (nonatomic) long long persistentID;
@property (retain, nonatomic) NSString *episodeGuid;
@property (retain, nonatomic) NSString *podcastFeedUrl;
@property (retain, nonatomic) NSString *episodeTitle;
@property (retain, nonatomic) NSString *podcastTitle;
@property (retain, nonatomic) NSString *streamUrl;

- (void).cxx_destruct;

@end
