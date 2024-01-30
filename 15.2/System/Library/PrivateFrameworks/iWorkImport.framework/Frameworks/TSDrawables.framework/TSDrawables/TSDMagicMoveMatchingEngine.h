@class NSMutableArray;

@interface TSDMagicMoveMatchingEngine : NSObject {
    NSMutableArray *_matches;
}

+ (id)matchingEngine;

- (void).cxx_destruct;
- (id)init;
- (id)matchResults;
- (void)addMatches:(id)a0;
- (void)addMatch:(id)a0;

@end
