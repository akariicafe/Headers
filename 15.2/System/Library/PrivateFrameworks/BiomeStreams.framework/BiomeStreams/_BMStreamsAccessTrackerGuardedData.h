@class NSMutableSet, NSMutableDictionary;

@interface _BMStreamsAccessTrackerGuardedData : NSObject {
    NSMutableSet *_streamsCheckedForReadEntitlements;
    NSMutableSet *_streamsCheckedForWriteEntitlements;
    NSMutableDictionary *_cachedSandboxCheckResults;
}

- (void).cxx_destruct;
- (id)init;

@end
