@class IMMessagePartChatItem, IMFullScreenEffect, NSTimer, NSString, UIImage;
@protocol IMFullScreenEffectSoundPlayer, IMFullScreenEffectPlayerDelegate;

@interface IMFullScreenEffectPlayer : NSObject <IMFullScreenEffectSoundPlayerDelegate>

@property (weak, nonatomic) NSTimer *effectTimer;
@property (retain, nonatomic) IMFullScreenEffect *fullScreenEffect;
@property (weak, nonatomic) IMMessagePartChatItem *messagePartChatItem;
@property (nonatomic) BOOL triggeredByResponseKit;
@property (retain, nonatomic) id<IMFullScreenEffectSoundPlayer> soundPlayer;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isFromMe;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSString *languageCode;
@property (nonatomic) BOOL wasAborted;
@property (weak, nonatomic) id<IMFullScreenEffectPlayerDelegate> delegate;
@property (nonatomic) BOOL shouldRepeat;
@property (retain, nonatomic) UIImage *messageImage;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) BOOL didPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startTimer;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_didPrepare;
- (void)loadFullScreenEffect:(id /* block */)a0;
- (void)abortPlayingEffect;
- (void)prepareToPlayEffect;
- (void)startPlayingEffect;
- (BOOL)_shouldAddFilter:(id)a0 toCell:(id)a1;
- (void)addFullScreenEffectFiltersToCells:(id)a0;
- (void)removeFullScreenEffectFiltersFromCells:(id)a0;
- (void)addFullScreenEffectFilterToTriggeringCell:(id)a0;
- (void)fullScreenEffectSoundPlayerDidStopPlaying:(id)a0;
- (void)fullScreenEffectSoundPlayerDidStartPlaying:(id)a0;
- (void)fullScreenEffectSoundPlayerDidPrepare:(id)a0;
- (id)initWithIdentifier:(id)a0 isFromMe:(BOOL)a1;
- (id)createSoundPlayer;
- (void)didSetFullScreenEffect:(id)a0;
- (void)_setFullScreenEffect:(id)a0;
- (void)didAbortPlaying;
- (void)didStopPlaying;
- (void)willStartPlaying;
- (id)initWithMessagePartChatItem:(id)a0 languageCode:(id)a1;
- (void)stopPlayingEffect;

@end
