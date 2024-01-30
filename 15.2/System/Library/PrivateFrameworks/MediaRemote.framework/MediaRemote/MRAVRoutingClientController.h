@class NSMutableDictionary, MRMediaRemoteService, NSObject;
@protocol OS_dispatch_queue;

@interface MRAVRoutingClientController : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_pendingCompletionHandlersForCategories;
    NSMutableDictionary *_cachedRoutesForCategories;
}

@property (readonly, nonatomic) MRMediaRemoteService *mediaRemoteService;

- (void)fetchPickableRoutesForCategory:(id)a0 completion:(id /* block */)a1;
- (id)initWithMediaRemoteService:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_pickableRoutesDidChangeNotification:(id)a0;
- (void)dealloc;

@end
