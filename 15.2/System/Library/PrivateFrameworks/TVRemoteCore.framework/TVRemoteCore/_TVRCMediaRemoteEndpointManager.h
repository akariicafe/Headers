@class NSObject;
@protocol OS_dispatch_queue;

@interface _TVRCMediaRemoteEndpointManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaRemoteQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)updateActiveEndpoint:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchActiveEndpointWithCompletion:(id /* block */)a0;

@end
