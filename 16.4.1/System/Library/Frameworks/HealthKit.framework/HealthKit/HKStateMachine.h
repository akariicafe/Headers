@class NSString, NSMutableDictionary, HKStateMachineState, NSMutableArray;
@protocol HKStateMachineDelegate;

@interface HKStateMachine : NSObject {
    NSMutableDictionary *_statesByIndex;
    NSMutableArray *_transitions;
    BOOL _isProcessingEvent;
    NSMutableArray *_pendingEvents;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (weak, nonatomic) id<HKStateMachineDelegate> delegate;
@property (readonly, nonatomic) HKStateMachineState *currentState;

+ (id)nameForOwner:(id)a0 UUID:(id)a1 tag:(id)a2;

- (id)initWithName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)graphDescription;
- (id)stateWithIndex:(long long)a0;
- (void)_dequeueEvent;
- (void)_handleEvent:(long long)a0 date:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (id)addStateTransitionFrom:(id)a0 to:(id)a1 event:(long long)a2 label:(id)a3;
- (id)addStateWithIndex:(long long)a0 label:(id)a1;
- (void)enqueueEvent:(long long)a0 date:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)enterAtState:(long long)a0;

@end
