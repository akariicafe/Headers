@class MPNowPlayingInfoLyricsItemToken, NSDate;

@interface MPNowPlayingInfoLyricsEvent : NSObject

@property (readonly, nonatomic) void *mediaRemoteLyricsEvent;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) MPNowPlayingInfoLyricsItemToken *token;

- (void)dealloc;
- (id)initWithMediaRemoteLyricsEvent:(void *)a0;

@end
