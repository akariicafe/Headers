@class NSMutableArray;

@interface MAPaths : NSObject {
    NSMutableArray *_paths;
}

+ (id)paths;
+ (id)pathsWithPaths:(id)a0;

- (void)setPaths:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)pathAtIndex:(unsigned long long)a0;
- (void)enumerateWithBlock:(id /* block */)a0;
- (void)addPath:(id)a0;
- (id)description;
- (unsigned long long)count;
- (void)removeAllPaths;
- (id)graphRepresentationWithStrictNodes:(BOOL)a0 strictEdges:(BOOL)a1;
- (id)uniqueNodesForLabel:(id)a0;
- (id)uniqueEdgesForLabel:(id)a0;

@end
