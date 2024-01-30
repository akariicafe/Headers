@class NSMutableArray;

@interface TSDMagicMoveMatchingEngine : NSObject {
    NSMutableArray *_matches;
}

+ (id)matchingEngine;

- (void)dealloc;
- (id)matchResults;
- (id)init;
- (void)addMatches:(id)a0;
- (void)addMatch:(id)a0;

@end
