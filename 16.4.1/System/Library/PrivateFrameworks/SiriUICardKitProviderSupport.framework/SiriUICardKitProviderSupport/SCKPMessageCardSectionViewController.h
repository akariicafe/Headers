@class AVAudioPlayer, INInteraction, SFMessageCardSection, NSString, SCKPMessageCardSectionView;
@protocol CRKCardSectionViewControllingDelegate;

@interface SCKPMessageCardSectionViewController : UIViewController <SCKPMessageCardSectionViewDelegate, AVAudioPlayerDelegate, CRKCardSectionViewControlling>

@property (readonly) SFMessageCardSection *cardSection;
@property (readonly) INInteraction *interaction;
@property (readonly) SCKPMessageCardSectionView *view;
@property (readonly) AVAudioPlayer *player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;

+ (void)initialize;

- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)loadView;
- (void)audioPlayerDecodeErrorDidOccur:(id)a0 error:(id)a1;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)desiresInteractivity:(id /* block */)a0;
- (void)cardEventDidOccur:(unsigned long long)a0 withIdentifier:(id)a1 userInfo:(id)a2;
- (void)_asrUpdated:(id)a0;
- (void)beginAudioPlayback;
- (void)createAudioPlayer;
- (id)initWithMessageCardSection:(id)a0 interaction:(id)a1;
- (void)messageCardSectionAttachmentTapped:(id)a0;
- (void)messageCardSectionContentUpdated:(id)a0;
- (void)messageCardSectionPlayButtonTapped:(id)a0;
- (void)messageCardSectionSendButtonTapped:(id)a0;
- (void)messageCardSectionViewBeganEditing:(id)a0;
- (void)messageCardSectionViewFinishedEditing:(id)a0;
- (void)messageContentUpdatedAndInitiatedByNewRequest:(BOOL)a0;
- (void)pauseAudioPlayback;
- (void)setupPlaybackSessionOptions;

@end
