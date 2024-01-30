@class NSString, ASReachabilityStatusCache, NSOperationQueue;

@interface ASReachabilityManager : NSObject {
    ASReachabilityStatusCache *_statusCache;
    NSOperationQueue *_queryOperationQueue;
}

@property (readonly, nonatomic) NSString *serviceIdentifier;

+ (id)sharedInstanceForServiceIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_initWithServiceIdentifer:(id)a0;
- (void)_addDestinationsToQuery:(id)a0 updateHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)queryDestinations:(id)a0 updateHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (long long)numberOfScheduledQueries;

@end
