@class NSMutableArray;

@interface _UIKBRTDecayingObject : NSObject {
    NSMutableArray *_resetBlocks;
}

@property (readonly, nonatomic) double lastUpdate;
@property (nonatomic) double timeoutDuration;
@property (readonly, nonatomic) BOOL isDecaying;
@property (readonly, nonatomic) BOOL isHolding;
@property (readonly, nonatomic) BOOL isActive;

- (void).cxx_destruct;
- (void)onResetDo:(id /* block */)a0;
- (void)updateDecay;
- (id)initWithTimeoutDuration:(double)a0;
- (void)resetDecayTo:(double)a0;
- (void)startOrUpdateDecay;
- (void)resetActiveDecayTo:(double)a0;
- (void)reset;
- (void)startDecaying;

@end
