@class NSXPCStoreServer, NSURL, NSError, APOdmlUnfairLock;

@interface APOdmlStoreServerContainer : APOdmlSingleton

@property (retain, nonatomic) NSXPCStoreServer *storeServer;
@property (readonly, nonatomic) NSURL *modelURL;
@property (nonatomic) BOOL isListening;
@property (retain, nonatomic) NSError *listeningError;
@property (readonly, nonatomic) APOdmlUnfairLock *listeningLock;

+ (id)sharedInstance;

- (void)startListening;
- (void)_startListening:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)storeServerForModelURL:(id)a0;

@end
