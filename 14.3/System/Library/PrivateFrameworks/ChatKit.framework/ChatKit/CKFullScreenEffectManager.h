@class CKScheduledUpdater, NSTimer, CKFullScreenEffect, NSString, NSMutableArray, NSObject;
@protocol CKFullScreenEffectManagerDelegate;

@interface CKFullScreenEffectManager : NSObject <CKFullScreenEffectDelegate>

@property (retain, nonatomic) CKFullScreenEffect *currentEffect;
@property (retain, nonatomic) NSMutableArray *effectQueue;
@property (retain, nonatomic) NSTimer *effectDurationTimer;
@property (retain, nonatomic) CKScheduledUpdater *triggerUpdater;
@property (weak, nonatomic) NSObject<CKFullScreenEffectManagerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)idleDurationAfterEffectWithIdentifier:(id)a0;
+ (id)localizedMaskStringForEffectWithIdentifier:(id)a0;
+ (double)delayBeforeEffectWithIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)triggerNextEffect;
- (id)fullscreenEffectMap;
- (id)effectForIdentifier:(id)a0;
- (id)effectIdentifiers;
- (void)stopFullscreenEffect;
- (void)fullScreenEffectDidPrepareSoundEffect:(id)a0;
- (id)localizedDisplayNameForEffectWithIdentifier:(id)a0;
- (id)localizedPickerTitleForEffectWithIdentifier:(id)a0;
- (void)startFullscreenEffectForChatItem:(id)a0 language:(id)a1;
- (void)beginHoldingUpdatesForKey:(id)a0;
- (void)endHoldingUpdatesForKey:(id)a0;

@end
