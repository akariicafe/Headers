@class SFPunchout, NSString, NSArray, NSTimer, SearchUIButton, TLKLabel, MPMediaEntity;

@interface SearchUIPlayButtonViewController : SearchUIAccessoryViewController <NUIContainerViewDelegate>

@property (retain, nonatomic) SFPunchout *punchout;
@property (retain, nonatomic) SearchUIButton *playButton;
@property (retain, nonatomic) TLKLabel *captionLabel;
@property (retain, nonatomic) NSString *spotlightIdentifier;
@property (retain, nonatomic) NSArray *storeIdentifiers;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) MPMediaEntity *mediaEntity;
@property (retain, nonatomic) NSString *universalLibraryID;
@property (nonatomic) long long mediaEntityType;
@property (nonatomic) unsigned long long persistentID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)font;
+ (id)_mediaEntityForPersistentID:(id)a0 forType:(int)a1;
+ (id)_mediaEntityForUniversalLibraryID:(id)a0 forType:(int)a1;
+ (id)mediaEntityForAction:(id)a0;
+ (BOOL)mediaItem:(id)a0 matchesPersistentID:(unsigned long long)a1 forType:(long long)a2;
+ (BOOL)mediaItem:(id)a0 matchesUniversalLibraryID:(id)a1 forType:(long long)a2;
+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (unsigned long long)type;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerView:(id)a0 layoutFrameForArrangedSubview:(id)a1 withProposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)hide;
- (void)playbackStateDidChange;
- (void).cxx_destruct;
- (void)play;
- (id)setupView;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (void)updatePlayState;
- (void)buttonPressed;
- (void)togglePlaybackState;
- (void)createTimerIfNeeded;
- (void)invalidateTimerIfNeeded;
- (BOOL)matchesNowPlayingAudioItem;
- (void)nowPlayingItemDidChange;
- (void)sendEngagementDidPunchout:(BOOL)a0;
- (BOOL)shouldTopAlignForAccessibilityContentSizes;
- (void)updateButtonProgressAnimated:(BOOL)a0;
- (BOOL)updateTimerForPauseState;

@end
