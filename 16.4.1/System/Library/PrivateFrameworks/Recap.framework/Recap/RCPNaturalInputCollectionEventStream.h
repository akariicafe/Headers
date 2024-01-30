@class NSMutableDictionary, RCPNaturalInputCollectionSelection, RCPEventSenderProperties, NSString, NSMutableArray;
@protocol RCPMachTimestampProvider;

@interface RCPNaturalInputCollectionEventStream : NSObject <RCPNaturalInputCollectionEventStreamChildComposer>

@property double currentTimeOffset;
@property (retain) id<RCPMachTimestampProvider> timestampProvider;
@property (retain) RCPNaturalInputCollectionSelection *currentSelection;
@property (retain) NSMutableDictionary *currentManipulatorsBySourceGroup;
@property long long currentPhase;
@property (retain) NSMutableArray *eventBuffer;
@property (retain, nonatomic) RCPEventSenderProperties *senderProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finish;
- (void)advanceTime:(double)a0;
- (void).cxx_destruct;
- (id)finalizedEvents;
- (void)closeManipulatorAtLocation:(struct CGPoint { double x0; double x1; })a0 withZPosition:(double)a1 sourceGroup:(long long)a2 interactionMethod:(long long)a3;
- (void)commitEvent;
- (id)initWithCurrentTimeOffset:(double)a0 timestampProvider:(id)a1 senderProperties:(id)a2;
- (void)moveManipulatorByDelta:(struct CGVector { double x0; double x1; })a0 withZDelta:(double)a1 sourceGroup:(long long)a2 interactionMethod:(long long)a3;
- (void)moveManipulatorToLocation:(struct CGPoint { double x0; double x1; })a0 withZPosition:(double)a1 sourceGroup:(long long)a2 interactionMethod:(long long)a3;
- (void)moveSelectionByDelta:(struct CGVector { double x0; double x1; })a0 withZDelta:(double)a1;
- (void)moveSelectionByDelta:(struct CGVector { double x0; double x1; })a0 zDelta:(double)a1 directionDelta:(struct CGVector { double x0; double x1; })a2 zDirectionDelta:(double)a3;
- (void)moveSelectionToLocation:(struct CGPoint { double x0; double x1; })a0 withZPosition:(double)a1;
- (void)moveSelectionToLocation:(struct CGPoint { double x0; double x1; })a0 zPosition:(double)a1 direction:(struct CGPoint { double x0; double x1; })a2 zDirection:(double)a3;
- (void)openManipulatorAtLocation:(struct CGPoint { double x0; double x1; })a0 withZPosition:(double)a1 sourceGroup:(long long)a2 interactionMethod:(long long)a3;
- (void)updatePhase;

@end
