@interface _TVRCMediaRemoteEndpointManager : NSObject

+ (id)sharedInstance;

- (void)updateActiveEndpoint:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchActiveEndpointWithCompletion:(id /* block */)a0;

@end
