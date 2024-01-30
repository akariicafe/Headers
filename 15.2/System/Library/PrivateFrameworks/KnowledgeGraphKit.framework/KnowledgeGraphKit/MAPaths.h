@class NSMutableArray;

@interface MAPaths : NSObject {
    NSMutableArray *_paths;
}

+ (id)paths;
+ (id)pathsWithPaths:(id)a0;

- (void)enumerateWithBlock:(id /* block */)a0;
- (void)addPath:(id)a0;
- (void)setPaths:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (id)pathAtIndex:(unsigned long long)a0;
- (void)removeAllPaths;
- (id)graphRepresentationWithStrictNodes:(BOOL)a0 strictEdges:(BOOL)a1;
- (id)uniqueNodesForLabel:(id)a0;
- (id)uniqueEdgesForLabel:(id)a0;

@end
