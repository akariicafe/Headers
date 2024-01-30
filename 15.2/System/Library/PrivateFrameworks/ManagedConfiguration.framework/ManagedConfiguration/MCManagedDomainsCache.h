@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MCManagedDomainsCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSMutableArray *memberQueueCache;

+ (id)sharedCache;

- (void)rereadCache;
- (void)memberQueueRereadCache;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isURLManaged:(id)a0;

@end
