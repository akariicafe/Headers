@class DNDState;

@interface DNDSStateProvider : NSObject

@property (copy) DNDState *lastCalculatedState;

- (void).cxx_destruct;
- (id)recalculateStateForSnapshot:(id)a0;

@end
