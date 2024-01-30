@class NSURL, NSMutableArray, NSArray;

@interface SFMediaPlayerItem : NSObject

@property (retain, nonatomic) NSMutableArray *playerItems;
@property (retain, nonatomic) id observerToken;
@property (readonly, nonatomic) NSURL *url;
@property (nonatomic) BOOL shouldLoop;
@property (readonly, copy, nonatomic) NSArray *playbackNotificationTimeRanges;
@property (readonly, copy, nonatomic) id /* block */ timeRangeHandler;
@property (copy, nonatomic) id /* block */ startedHandler;
@property (copy, nonatomic) id /* block */ completedHandler;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithURL:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)setPlayerItem:(id)a0;
- (void)invalidate;
- (void)setPlaybackNotificationTimeRanges:(id)a0 withTimeRangeHandler:(id /* block */)a1;

@end
