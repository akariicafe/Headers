@class IMAudioController, NSURL, NSString;
@protocol IMFullScreenEffectSoundPlayerDelegate;

@interface IMFullScreenEffectSoundPlayer : NSObject <IMAudioControllerDelegate, IMFullScreenEffectSoundPlayer>

@property (retain, nonatomic) IMAudioController *audioController;
@property (nonatomic) BOOL started;
@property (readonly, nonatomic) NSURL *soundURL;
@property (readonly, nonatomic) BOOL hasHapticTrack;
@property (nonatomic) float currentVolume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IMFullScreenEffectSoundPlayerDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)_supportsSoundEffects;
- (void)_audioSessionOptionsWillChange:(id)a0;
- (id)_ensureAudioPlayer;
- (void)_didStart;
- (void)_didPrepare;
- (void)audioController:(id)a0 didChangeProgressForContentAtURL:(id)a1 currentTime:(double)a2 duration:(double)a3;
- (void)audioController:(id)a0 didPrepareToPlayContentAtURL:(id)a1 successfully:(BOOL)a2;
- (void)_didStop;
- (void)stopPlayingSound;
- (id)initWithSoundURL:(id)a0 hasHapticTrack:(BOOL)a1;
- (void)prepareToPlaySound;
- (void)startPlayingSound;

@end
