@class NSString, NSDictionary;

@interface MPNowPlayingInfoLyricsItemToken : NSObject

@property (readonly, nonatomic) void *mediaRemoteLyricsItemToken;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *userInfo;

- (void)dealloc;
- (id)initWithIdentifier:(id)a0 userInfo:(id)a1;
- (id)initWithMediaRemoteLyricsItemToken:(void *)a0;

@end
