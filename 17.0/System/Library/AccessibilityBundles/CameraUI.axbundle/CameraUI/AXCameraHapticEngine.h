@class CHHapticEngine;
@protocol CHHapticPatternPlayer;

@interface AXCameraHapticEngine : NSObject

@property (readonly, nonatomic) BOOL _supportsHaptics;
@property (readonly, nonatomic) BOOL _supportsAudio;
@property (readonly, nonatomic) CHHapticEngine *_engine;
@property (retain, nonatomic) id<CHHapticPatternPlayer> _levelPlayer;
@property (retain, nonatomic) id<CHHapticPatternPlayer> _unlevelPlayer;
@property (retain, nonatomic) id<CHHapticPatternPlayer> _screenEdgePlayer;
@property (nonatomic) unsigned long long _levelAudioResourceID;
@property (nonatomic) unsigned long long _unlevelAudioResourceID;
@property (nonatomic) double _lastScreenEdgeTimestamp;
@property (nonatomic) double screenEdgeFeedbackCooldownTime;

+ (id)_stringForHapticEngineStoppedReason:(long long)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_createScreenEdgePlayerIfNeeded;
- (void)_releasePlayers;
- (void)_createLevelPlayerIfNeeded;
- (void)_createUnlevelPlayerIfNeeded;
- (void)_performHapticForPlayer:(id)a0;
- (unsigned long long)_registerAudioWithResourceWithName:(id)a0;
- (void)_unregisterAudioResource:(unsigned long long)a0;
- (void)performLevelFeedback;
- (void)performSubjectHitScreenEdgeFeedback;
- (void)performUnlevelFeedback;

@end
