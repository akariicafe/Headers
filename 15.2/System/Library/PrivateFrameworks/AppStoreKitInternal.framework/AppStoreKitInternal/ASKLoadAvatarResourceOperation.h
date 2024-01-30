@class NSString;

@interface ASKLoadAvatarResourceOperation : ASKLoadResourceOperation

@property (readonly, copy, nonatomic) NSString *playerId;

+ (id)supportedScheme;

- (void)main;
- (void).cxx_destruct;
- (id)initWithURLRequest:(id)a0 dataConsumer:(id)a1;
- (id)makePlayerFetchError;
- (id)initWithPlayerId:(id)a0;

@end
