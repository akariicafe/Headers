@class NSDictionary;

@interface VCEmulatedNetworkElement : NSObject {
    NSDictionary *_policies;
    struct opaqueCMSimpleQueue { } *_networkElementQueue;
}

@property (copy, nonatomic) id /* block */ processCompleteHandler;

- (id)initWithPolicies:(id)a0;
- (int)write:(id)a0;
- (void)dealloc;
- (void)runUntilTime:(double)a0;
- (void)connectTo:(id)a0;
- (void)drainAndReleasePackets;
- (void)connectFrom:(id)a0;

@end
