@class NSString, CKMessagePartChatItem, CKAudioController;
@protocol CKFullScreenEffectDelegate;

@interface CKFullScreenEffect : NSObject <CKAudioControllerDelegate> {
    CKAudioController *_audioController;
    float _currentVolume;
}

@property (nonatomic) BOOL triggeredByResponseKit;
@property (nonatomic) char messageOrientation;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) CKMessagePartChatItem *triggeringChatItem;
@property (weak, nonatomic) id<CKFullScreenEffectDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_monochromeDimmingFilterWithType:(int)a0;
+ (id)bigEmojiFilter;
+ (id)stickerFilter;
+ (id)tapBackFilter;

- (id)backgroundColor;
- (double)duration;
- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)layerCount;
- (Class)effectViewClass;
- (void)playSoundEffect;
- (void)_audioSessionOptionsWillChange:(id)a0;
- (void)stopSoundEffect;
- (void)_didPrepareSoundEffect;
- (void)_ensureAudioPlayer;
- (int)_filterTypeForCell:(id)a0 caresAboutOrientation:(BOOL *)a1 orientation:(char *)a2;
- (BOOL)_isPlaySoundEnabled;
- (BOOL)_supportsSoundEffects;
- (void)animateFiltersForCell:(id)a0;
- (void)applyMessageFiltersToCells:(id)a0;
- (void)applyMessageFiltersToTriggeringCell:(id)a0;
- (void)audioController:(id)a0 didPrepareMediaObjectToPlay:(id)a1 successfully:(BOOL)a2;
- (void)audioController:(id)a0 mediaObjectProgressDidChange:(id)a1 currentTime:(double)a2 duration:(double)a3;
- (void)clearMessageFiltersFromCells:(id)a0;
- (BOOL)effectIsDark;
- (BOOL)isForegroundEffect;
- (id)messageFilters;
- (void)prepareSoundEffect;
- (BOOL)shouldDrawOverNavigationBar;
- (id)soundEffectFileURL;
- (BOOL)soundEffectHasHapticTrack;

@end
