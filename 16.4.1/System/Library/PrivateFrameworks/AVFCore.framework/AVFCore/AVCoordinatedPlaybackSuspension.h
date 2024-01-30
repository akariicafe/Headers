@class NSString, AVPlaybackCoordinator, NSDate;

@interface AVCoordinatedPlaybackSuspension : NSObject {
    AVPlaybackCoordinator *_coordinator;
    struct OpaqueFigTimelineCoordinatorSuspension { } *_figSuspension;
    struct OpaqueFigSimpleMutex { } *_iVarMutex;
}

@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSDate *beginDate;

- (void)end;
- (void)dealloc;
- (struct OpaqueFigTimelineCoordinatorSuspension { } *)_figSuspension;
- (void)endProposingNewTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithCoordinator:(id)a0 reason:(id)a1;

@end
