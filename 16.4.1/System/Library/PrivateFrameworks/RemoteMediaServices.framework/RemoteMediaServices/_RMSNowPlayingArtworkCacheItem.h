@class NSString, NSData;

@interface _RMSNowPlayingArtworkCacheItem : NSObject <NSDiscardableContent> {
    BOOL _keepAlive;
}

@property (retain, nonatomic) NSString *artworkIdentifier;
@property (retain, nonatomic) NSData *artworkData;

- (void)discardContentIfPossible;
- (BOOL)isContentDiscarded;
- (void)endContentAccess;
- (void).cxx_destruct;
- (BOOL)beginContentAccess;

@end
