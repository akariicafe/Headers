@class NSMutableDictionary, MRMediaRemoteService, NSObject;
@protocol OS_dispatch_queue;

@interface MRAVRoutingClientController : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_pendingCompletionHandlersForCategories;
    NSMutableDictionary *_cachedRoutesForCategories;
}

@property (readonly, nonatomic) MRMediaRemoteService *mediaRemoteService;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchPickableRoutesForCategory:(id)a0 completion:(id /* block */)a1;
- (id)initWithMediaRemoteService:(id)a0;
- (void)_pickableRoutesDidChangeNotification:(id)a0;

@end
