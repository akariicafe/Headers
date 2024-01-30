@class NSMutableDictionary, SignpostRenderServerRenderInterval, SignpostFrameLatencyInterval, SignpostHIDLatencyInterval;

@interface SignpostFrameAccumulatedState : NSObject

@property (readonly, nonatomic) unsigned int frameSeed;
@property (retain, nonatomic) NSMutableDictionary *contextIDtoContextInfoDict;
@property (retain, nonatomic) SignpostRenderServerRenderInterval *renderInterval;
@property (retain, nonatomic) NSMutableDictionary *frameSeedToSkippedRenderIntervals;
@property (retain, nonatomic) SignpostHIDLatencyInterval *hidLatency;
@property (retain, nonatomic) SignpostFrameLatencyInterval *frameLatency;

- (void).cxx_destruct;
- (void)_addSkippedRender:(id)a0;
- (id)initWithFrameSeed:(unsigned int)a0;

@end
