@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MCSafariPasswordAutoFillDomainsCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSMutableArray *memberQueueCache;

+ (id)sharedCache;

- (BOOL)isSafariPasswordAutoFillAllowedForURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)memberQueueRereadCache;
- (void)rereadCache;

@end
