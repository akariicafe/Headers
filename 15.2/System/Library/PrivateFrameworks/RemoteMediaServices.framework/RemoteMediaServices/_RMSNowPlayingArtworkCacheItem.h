@class NSString, NSData;

@interface _RMSNowPlayingArtworkCacheItem : NSObject <NSDiscardableContent> {
    BOOL _keepAlive;
}

@property (retain, nonatomic) NSString *artworkIdentifier;
@property (retain, nonatomic) NSData *artworkData;

- (BOOL)isContentDiscarded;
- (void)endContentAccess;
- (void)discardContentIfPossible;
- (void).cxx_destruct;
- (BOOL)beginContentAccess;

@end
