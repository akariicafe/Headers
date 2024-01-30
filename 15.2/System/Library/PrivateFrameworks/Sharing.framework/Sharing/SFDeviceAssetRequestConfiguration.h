@interface SFDeviceAssetRequestConfiguration : NSObject

@property (readonly, copy, nonatomic) id /* block */ queryResultHandler;
@property (nonatomic) double timeout;
@property (copy, nonatomic) id /* block */ downloadCompletionHandler;

- (id)initWithQueryResultHandler:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;

@end
