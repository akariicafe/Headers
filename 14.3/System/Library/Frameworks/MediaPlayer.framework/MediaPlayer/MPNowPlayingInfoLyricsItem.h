@class MPNowPlayingInfoLyricsItemToken, NSString;

@interface MPNowPlayingInfoLyricsItem : NSObject

@property (readonly, nonatomic) void *mediaRemoteLyricsItem;
@property (readonly, nonatomic) MPNowPlayingInfoLyricsItemToken *token;
@property (readonly, nonatomic) NSString *lyrics;
@property (readonly, nonatomic) BOOL userProvided;

- (void)dealloc;
- (id)initWithLyrics:(id)a0 userProvided:(BOOL)a1;
- (id)initWithLyrics:(id)a0 userProvided:(BOOL)a1 token:(id)a2;
- (id)initWithMediaRemoteLyricsItem:(void *)a0;

@end
