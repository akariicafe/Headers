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

+ (void)initialize;
+ (id)font;
+ (BOOL)supportsRowModel:(id)a0;
+ (id)mediaEntityForAction:(id)a0;
+ (BOOL)mediaItem:(id)a0 matchesUniversalLibraryID:(id)a1 forType:(long long)a2;
+ (BOOL)mediaItem:(id)a0 matchesPersistentID:(unsigned long long)a1 forType:(long long)a2;
+ (id)_mediaEntityForUniversalLibraryID:(id)a0 forType:(int)a1;
+ (id)_mediaEntityForPersistentID:(id)a0 forType:(int)a1;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerView:(id)a0 layoutFrameForArrangedSubview:(id)a1 withProposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)updateWithRowModel:(id)a0;
- (id)setupView;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (void)play;
- (void)hide;
- (unsigned long long)type;
- (void)playbackStateDidChange;
- (void)dealloc;
- (void)updatePlayState;
- (void)buttonPressed;
- (void)invalidateTimerIfNeeded;
- (void)nowPlayingItemDidChange;
- (BOOL)matchesNowPlayingAudioItem;
- (void)togglePlaybackState;
- (void)sendEngagementDidPunchout:(BOOL)a0;
- (void)createTimerIfNeeded;
- (BOOL)updateTimerForPauseState;
- (void)updateButtonProgressAnimated:(BOOL)a0;
- (BOOL)shouldTopAlignForAccessibilityContentSizes;

@end
