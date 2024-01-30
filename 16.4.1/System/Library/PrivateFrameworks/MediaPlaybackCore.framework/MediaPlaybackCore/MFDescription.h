@interface MFDescription : NSObject

+ (id)forBufferState:(long long)a0;
+ (id)forPlayerState:(long long)a0;
+ (id)forErrorResolution:(long long)a0;
+ (id)forItemChangeSource:(long long)a0;
+ (id)forItemRequestReason:(long long)a0;
+ (id)forItemTransition:(long long)a0;
+ (id)forPlaybackTimeChangeReason:(long long)a0;
+ (id)forPlayerItemTransitionType:(long long)a0;
+ (id)forPlayerSpatializationFormat:(long long)a0;
+ (id)forReloadingReason:(long long)a0;
+ (id)forTimeControlStatus:(long long)a0;
+ (id)forUserActionSource:(long long)a0;
+ (id)forUserActionType:(long long)a0;

- (id)init;

@end
