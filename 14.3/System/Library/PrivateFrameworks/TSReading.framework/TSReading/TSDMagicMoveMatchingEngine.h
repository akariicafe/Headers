@class NSMutableArray;

@interface TSDMagicMoveMatchingEngine : NSObject {
    NSMutableArray *_matches;
}

+ (id)matchingEngine;

- (id)init;
- (void)dealloc;
- (void)addMatches:(id)a0;
- (id)matchResults;
- (void)addMatch:(id)a0;

@end
