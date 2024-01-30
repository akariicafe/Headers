@class NSString, ASReachabilityStatusCache, NSOperationQueue;

@interface ASReachabilityManager : NSObject {
    ASReachabilityStatusCache *_statusCache;
    NSOperationQueue *_queryOperationQueue;
}

@property (readonly, nonatomic) NSString *serviceIdentifier;

+ (id)sharedInstanceForServiceIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_addDestinationsToQuery:(id)a0 updateHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)_initWithServiceIdentifer:(id)a0;
- (long long)numberOfScheduledQueries;
- (void)queryDestinations:(id)a0 updateHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
