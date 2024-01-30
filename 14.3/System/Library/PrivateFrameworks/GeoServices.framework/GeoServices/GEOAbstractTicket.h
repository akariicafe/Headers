@class NSDictionary, GEODataRequestThrottlerToken, GEOMapServiceTraits;

@interface GEOAbstractTicket : NSObject {
    BOOL _cancelled;
    GEODataRequestThrottlerToken *_throttlerToken;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (nonatomic) unsigned long long cachePolicy;
@property (readonly, nonatomic) NSDictionary *responseUserInfo;
@property (readonly, getter=isCancelled) BOOL cancelled;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTraits:(id)a0;
- (void)setThrottlerToken:(id)a0;

@end
