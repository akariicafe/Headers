@class NSMutableArray;

@interface VUIPlaybackReporter : NSObject

@property (retain, nonatomic) NSMutableArray *sessions;
@property (readonly, nonatomic) BOOL enforceSinglePlaybackSession;

- (void).cxx_destruct;
- (void)_removeObservers;
- (id)init;
- (void)_registerObservers;
- (void)dealloc;
- (void)_playerStateWillChange:(id)a0;
- (void)_playerCurrentMediaItemWillChange:(id)a0;
- (void)_logWithFormat:(id)a0;
- (void)_handlePlaybackChangeForPlayer:(id)a0 fromState:(id)a1 toState:(id)a2 reason:(id)a3;
- (id)_sessionForPlayer:(id)a0;
- (void)_endSession:(id)a0;
- (BOOL)_isTransitionValidForPlayer:(id)a0 fromState:(id)a1 toState:(id)a2;
- (void)_reportForSession:(id)a0 state:(id)a1 reason:(id)a2;
- (void)_endSessions:(id)a0;
- (id)_createSessionForPlayer:(id)a0;
- (void)_beginSession:(id)a0;

@end
