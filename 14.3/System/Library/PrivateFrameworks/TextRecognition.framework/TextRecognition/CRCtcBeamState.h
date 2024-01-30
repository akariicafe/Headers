@class NSDictionary, NSMutableDictionary;

@interface CRCtcBeamState : NSObject

@property (retain, nonatomic) NSMutableDictionary *mutablePaths;
@property (readonly) NSDictionary *paths;

- (id)init;
- (void).cxx_destruct;
- (void)addPath:(id)a0;
- (id)pathForString:(id)a0;
- (id)sortedKeys;
- (void)mergePathsWithTrailingWhitespaces;
- (void)kBest:(id *)a0 discarded:(id *)a1 k:(unsigned long long)a2;

@end
