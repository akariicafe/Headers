@class NSMutableSet, NSMutableDictionary;

@interface _BMStreamsAccessTrackerGuardedData : NSObject {
    NSMutableSet *_loggedReads;
    NSMutableSet *_loggedWrites;
    NSMutableDictionary *_cachedSandboxCheckResults;
}

- (id)init;
- (void).cxx_destruct;

@end
