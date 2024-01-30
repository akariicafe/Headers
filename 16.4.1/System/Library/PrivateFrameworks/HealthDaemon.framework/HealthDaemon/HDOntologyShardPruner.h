@class HDOntologyUpdateCoordinator;

@interface HDOntologyShardPruner : NSObject <HDCacheDeleteProvider>

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator;

- (id)initWithOntologyUpdateCoordinator:(id)a0;
- (long long)purgeableSpaceForUrgency:(int)a0;
- (id)init;
- (long long)purgeSpaceForUrgency:(int)a0;
- (BOOL)pruneOntologyWithOptions:(unsigned long long)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
