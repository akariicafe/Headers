@class NSURL, NSXPCStoreServer;

@interface APOdmlStoreServerContainer : APOdmlSingleton

@property (readonly, nonatomic) NSXPCStoreServer *storeServer;
@property (readonly, nonatomic) NSURL *modelURL;

+ (id)sharedInstance;

- (void)startListening;
- (void).cxx_destruct;
- (id)init;

@end
