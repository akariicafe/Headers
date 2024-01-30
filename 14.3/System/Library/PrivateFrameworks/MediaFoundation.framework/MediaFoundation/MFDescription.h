@interface MFDescription : NSObject

+ (id)forItemChangeSource:(long long)a0;
+ (id)forPlayerState:(long long)a0;
+ (id)forPlaybackTimeChangeReason:(long long)a0;
+ (id)forErrorResolution:(long long)a0;
+ (id)forBufferState:(long long)a0;
+ (id)forItemRequestReason:(long long)a0;
+ (id)forItemTransition:(long long)a0;
+ (id)forUserActionType:(long long)a0;
+ (id)forUserActionSource:(long long)a0;

- (id)init;

@end
