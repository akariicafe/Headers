@class NSDictionary;

@interface PGCommand : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) long long systemAction;
@property (readonly, nonatomic) long long faceTimeAction;
@property (readonly, nonatomic) long long playbackAction;
@property (readonly, nonatomic) BOOL associatedBoolValue;
@property (readonly, nonatomic) long long associatedIntegerValue;
@property (readonly, nonatomic) double associatedDoubleValue;
@property (readonly, nonatomic) long long testingAction;

+ (id)commandForPlaybackAction:(long long)a0 associatedBoolValue:(BOOL)a1;
+ (id)commandForPlaybackAction:(long long)a0;
+ (id)commandForPlaybackAction:(long long)a0 associatedDoubleValue:(double)a1;
+ (id)commandForSystemAction:(long long)a0;
+ (id)commandForTestingAction:(long long)a0;
+ (id)commandForFaceTimeAction:(long long)a0 associatedBoolValue:(BOOL)a1;
+ (id)commandForFaceTimeAction:(long long)a0;
+ (id)commandForFaceTimeAction:(long long)a0 associatedIntegerValue:(long long)a1;
+ (id)commandForSetMuted:(BOOL)a0;
+ (id)commandForSetPlaying:(BOOL)a0;
+ (id)commandForSetSuspended:(BOOL)a0;
+ (id)commandForBeginInterruption;
+ (id)commandForEndInterruptionWithShouldResumeSuggestion:(BOOL)a0;
+ (id)commandForSkipToLive;
+ (id)commandForSkipPreroll;
+ (id)commandForSkipByInterval:(double)a0;
+ (id)commandForEndOrLeaveActivityRequested;
+ (id)commandForCancelPIP;
+ (id)commandForRestoreFromPIP;
+ (id)commandForToggleControlsVisibility;
+ (id)commandForSendActionButtonTapped;
+ (id)commandForToggleZoom;
+ (id)commandForStartPIP;
+ (id)commandForInvalidateFromProxy;
+ (id)commandForTestStartPIP;
+ (id)commandForSetCameraEnabled:(BOOL)a0;
+ (id)commandForSetMicrophoneMuted:(BOOL)a0;
+ (id)commandForSwitchCamera;
+ (id)commandForMenuItemSelected:(long long)a0;
+ (id)commandForShowHUD;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithDictionary:(id)a0;
- (void)appendDescriptionForKey:(long long)a0 value:(id)a1 toBuilder:(id)a2;

@end
