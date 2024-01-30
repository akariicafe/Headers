@class TLKStackView, SearchUILabel, NSString, SearchUIButton, SearchUISelectableTextView;

@interface SearchUIAudioPlaybackCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, SearchUISelectableTextViewDelegate, SearchUICardSectionViewUpdatable>

@property (retain, nonatomic) TLKStackView *contentView;
@property (retain, nonatomic) SearchUILabel *detailTextLabel;
@property (retain, nonatomic) SearchUISelectableTextView *titleTextView;
@property (retain, nonatomic) SearchUISelectableTextView *subtitleView;
@property (retain, nonatomic) SearchUIButton *playButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)setupContentView;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (void)selectableTextView:(id)a0 presentViewController:(id)a1;
- (void)_playButtonPressed:(id)a0;
- (void)_updateStateFromCardSection:(id)a0 animated:(BOOL)a1;
- (void)updateStateFromCardSection:(id)a0;

@end
