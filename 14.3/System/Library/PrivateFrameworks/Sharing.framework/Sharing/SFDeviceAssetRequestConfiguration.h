@interface SFDeviceAssetRequestConfiguration : NSObject

@property (readonly, copy, nonatomic) id /* block */ queryResultHandler;
@property (nonatomic) double timeout;
@property (copy, nonatomic) id /* block */ downloadCompletionHandler;

- (void).cxx_destruct;
- (id)initWithQueryResultHandler:(id /* block */)a0;
- (id)description;

@end
