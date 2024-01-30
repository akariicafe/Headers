@class NSMutableSet, PGManagerWorkingContext, PGDiscoveryFeedGenerationOptions;

@interface PGDiscoveryFeedGenerationSession : NSObject {
    PGDiscoveryFeedGenerationOptions *_options;
    PGManagerWorkingContext *_workingContext;
    NSMutableSet *_usedLocalIdentifiers;
}

- (id)currentState;
- (void)_restoreState:(id)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 workingContext:(id)a1;
- (id)initWithOptions:(id)a0 workingContext:(id)a1 state:(id)a2;
- (id)additionalItemsWithTargetCount:(unsigned long long)a0;

@end
