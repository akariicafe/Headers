@class NSDictionary;

@interface PGCommand : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) long long systemAction;
@property (readonly, nonatomic) long long faceTimeAction;
@property (readonly, nonatomic) long long playbackAction;
@property (readonly, nonatomic) BOOL associatedBoolValue;
@property (readonly, nonatomic) double associatedDoubleValue;

+ (id)commandForPlaybackAction:(long long)a0 associatedBoolValue:(BOOL)a1;
+ (id)commandForPlaybackAction:(long long)a0;
+ (id)commandForPlaybackAction:(long long)a0 associatedDoubleValue:(double)a1;
+ (id)commandForSystemAction:(long long)a0;
+ (id)commandForFaceTimeAction:(long long)a0 associatedBoolValue:(BOOL)a1;
+ (id)commandForFaceTimeAction:(long long)a0;
+ (id)commandForSetMuted:(BOOL)a0;
+ (id)commandForSetPlaying:(BOOL)a0;
+ (id)commandForSetSuspended:(BOOL)a0;
+ (id)commandForBeginInterruption;
+ (id)commandForEndInterruptionWithShouldResumeSuggestion:(BOOL)a0;
+ (id)commandForSkipToLive;
+ (id)commandForSkipPreroll;
+ (id)commandForSkipByInterval:(double)a0;
+ (id)commandForCancelPIP;
+ (id)commandForRestoreFromPIP;
+ (id)commandForToggleControlsVisibility;
+ (id)commandForSendActionButtonTapped;
+ (id)commandForToggleZoom;
+ (id)commandForSetCameraEnabled:(BOOL)a0;
+ (id)commandForSetMicrophoneMuted:(BOOL)a0;
+ (id)commandForSwitchCamera;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)appendDescriptionForKey:(long long)a0 value:(id)a1 toBuilder:(id)a2;

@end
