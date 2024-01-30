@class NSMutableArray;

@interface TSDMagicMoveMatchingEngine : NSObject {
    NSMutableArray *_matches;
}

+ (id)matchingEngine;

- (id)init;
- (void).cxx_destruct;
- (void)addMatches:(id)a0;
- (id)matchResults;
- (void)addMatch:(id)a0;

@end
