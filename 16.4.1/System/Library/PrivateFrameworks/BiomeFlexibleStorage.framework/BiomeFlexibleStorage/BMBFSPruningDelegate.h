@class NSObject, NSString, NSMutableArray, BMRegistrar;
@protocol OS_dispatch_queue;

@interface BMBFSPruningDelegate : NSObject <BMStreamDatastorePruningDelegate>

@property (retain, nonatomic) NSMutableArray *prunedIdentifiables;
@property (readonly, nonatomic) NSString *streamId;
@property (readonly, nonatomic) BMRegistrar *registrar;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)new;

- (void)didPruneEvents;
- (void)willPruneEvent:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithStreamId:(id)a0;
- (id)initWithStreamId:(id)a0 registrar:(id)a1;
- (BOOL)shouldHandleDeletions;

@end
