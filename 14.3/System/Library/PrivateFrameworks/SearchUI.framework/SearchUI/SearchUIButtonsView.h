@class SearchUIMovieCardSectionView;

@interface SearchUIButtonsView : NUIContainerBoxView

@property (weak) SearchUIMovieCardSectionView *cardSectionView;

- (void).cxx_destruct;
- (BOOL)channelHasBeenSeen:(id)a0 seenChannels:(id)a1;
- (void)sendErrorFeedbackIfNecessary:(id)a0;
- (id)buttonForChannelOffer:(id)a0 channel:(id)a1 episode:(id)a2;
- (id)buttonForOffer:(id)a0 playable:(id)a1;
- (id)buttonForChannelDetails:(id)a0 punchoutURLs:(id)a1 isEntitled:(BOOL)a2 isContinuing:(BOOL)a3 isContainerItem:(BOOL)a4 seasonNumber:(id)a5 episodeNumber:(id)a6;
- (id)buttonForPlayable:(id)a0;
- (id)initWithCardSectionView:(id)a0;
- (id)buttonWithTitle:(id)a0 subtitle:(id)a1 punchoutURL:(id)a2;
- (void)fetchButtonsWithCompletionHandler:(id /* block */)a0;
- (id)buttonsForPlayables:(id)a0 channels:(id)a1 currentEpisode:(id)a2 isUpNextable:(BOOL)a3 isUpNexted:(BOOL)a4;

@end
