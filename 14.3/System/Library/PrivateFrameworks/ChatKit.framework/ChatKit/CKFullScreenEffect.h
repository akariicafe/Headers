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

+ (id)tapBackFilter;
+ (id)stickerFilter;
+ (id)bigEmojiFilter;
+ (id)_monochromeDimmingFilterWithType:(int)a0;

- (void)applyMessageFiltersToCells:(id)a0;
- (void)applyMessageFiltersToTriggeringCell:(id)a0;
- (BOOL)isForegroundEffect;
- (BOOL)shouldDrawOverNavigationBar;
- (void)playSoundEffect;
- (void)clearMessageFiltersFromCells:(id)a0;
- (void)audioController:(id)a0 mediaObjectProgressDidChange:(id)a1 currentTime:(double)a2 duration:(double)a3;
- (void)audioController:(id)a0 didPrepareMediaObjectToPlay:(id)a1 successfully:(BOOL)a2;
- (id)messageFilters;
- (void).cxx_destruct;
- (void)animateFiltersForCell:(id)a0;
- (BOOL)_supportsSoundEffects;
- (int)_filterTypeForCell:(id)a0 caresAboutOrientation:(BOOL *)a1 orientation:(char *)a2;
- (id)soundEffectFileURL;
- (BOOL)soundEffectHasHapticTrack;
- (void)_audioSessionOptionsWillChange:(id)a0;
- (void)_didPrepareSoundEffect;
- (void)_ensureAudioPlayer;
- (void)dealloc;
- (Class)effectViewClass;
- (BOOL)_isPlaySoundEnabled;
- (BOOL)effectIsDark;
- (id)backgroundColor;
- (double)duration;
- (unsigned long long)layerCount;
- (void)prepareSoundEffect;
- (void)stopSoundEffect;

@end
