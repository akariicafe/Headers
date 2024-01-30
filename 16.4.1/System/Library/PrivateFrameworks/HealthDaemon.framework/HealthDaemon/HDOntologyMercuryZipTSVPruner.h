@class HDOntologyUpdateCoordinator;

@interface HDOntologyMercuryZipTSVPruner : NSObject

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator;

- (id)initWithOntologyUpdateCoordinator:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)pruneEntries:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
