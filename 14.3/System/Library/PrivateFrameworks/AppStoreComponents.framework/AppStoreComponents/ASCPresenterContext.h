@class ASCLockupFetcher, ASCArtworkFetcher, ASCAppOfferStateCenter;

@interface ASCPresenterContext : NSObject

@property (class, readonly) ASCPresenterContext *sharedContext;

@property (readonly, nonatomic) ASCArtworkFetcher *artworkFetcher;
@property (readonly, nonatomic) ASCLockupFetcher *lockupFetcher;
@property (readonly, nonatomic) ASCAppOfferStateCenter *appOfferStateCenter;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithArtworkFetcher:(id)a0 lockupFetcher:(id)a1 appOfferStateCenter:(id)a2;

@end
