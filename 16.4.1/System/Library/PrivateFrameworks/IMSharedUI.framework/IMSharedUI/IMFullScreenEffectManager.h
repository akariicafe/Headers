@class IMFullScreenEffectPlayer, IMFullScreenEffect, NSString, NSMutableArray, IMScheduledUpdater;
@protocol IMFullScreenEffectManagerDelegate;

@interface IMFullScreenEffectManager : NSObject <IMFullScreenEffectPlayerDelegate>

@property (retain, nonatomic) IMFullScreenEffectPlayer *currentEffectPlayer;
@property (retain, nonatomic) NSMutableArray *effectQueue;
@property (retain, nonatomic) IMScheduledUpdater *triggerUpdater;
@property (weak, nonatomic) id<IMFullScreenEffectManagerDelegate> delegate;
@property (readonly, nonatomic) IMFullScreenEffect *currentEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)beginHoldingUpdatesForKey:(id)a0;
- (void)endHoldingUpdatesForKey:(id)a0;
- (void)triggerNextEffect;
- (void)fullScreenEffectPlayerDidStart:(id)a0;
- (void)_stopCurrentFullscreenEffect:(BOOL)a0;
- (double)adjustedEffectDurationForTesting:(id)a0;
- (void)fullScreenEffectPlayerDidFinish:(id)a0;
- (void)fullScreenEffectPlayerDidPrepare:(id)a0;
- (BOOL)isFullScreenEffectQueued:(id)a0;
- (void)queueFullScreenEffectPlayer:(id)a0 withRepeating:(BOOL)a1;
- (void)stopAllFullscreenEffectPlayers;
- (void)stopCurrentFullscreenEffectPlayer;
- (void)willStartFullScreenEffect:(id)a0;

@end
