@interface SearchUIWatchListUtilities : NSObject

+ (void)generateWatchListReponseForWatchListIdentifier:(id)a0 type:(int)a1 completion:(id /* block */)a2;
+ (long long)wlkTypeForType:(int)a0;
+ (id)buttonForChannelDetails:(id)a0 punchoutURLs:(id)a1 isEntitled:(BOOL)a2 isContinuing:(BOOL)a3 isContainerItem:(BOOL)a4 hasDescriptiveSeasonTitle:(BOOL)a5 seasonNumber:(id)a6 episodeNumber:(id)a7 isHorizontallySrollingStyle:(BOOL)a8;
+ (id)buttonForChannelOffer:(id)a0 channel:(id)a1 episode:(id)a2;
+ (id)buttonForOffer:(id)a0 playable:(id)a1;
+ (id)buttonForPlayable:(id)a0 isHorizontallySrollingStyle:(BOOL)a1;
+ (id)buttonWithTitle:(id)a0 subtitle:(id)a1 punchoutURL:(id)a2 type:(unsigned long long)a3 image:(id)a4 storeIdentifier:(id)a5;
+ (id)buttonsForPlayables:(id)a0 channels:(id)a1 currentEpisode:(id)a2 isUpNextable:(BOOL)a3 watchListState:(id)a4 isHorizontallySrollingStyle:(BOOL)a5;
+ (BOOL)channelHasBeenSeen:(id)a0 seenChannels:(id)a1;
+ (void)fetchButtonsForWatchListIdentifier:(id)a0 type:(int)a1 isHorizontallySrollingStyle:(BOOL)a2 completion:(id /* block */)a3;
+ (void)fetchButtonsForWatchListIdentifier:(id)a0 type:(int)a1 isHorizontallySrollingStyle:(BOOL)a2 fetchButtons:(BOOL)a3 completion:(id /* block */)a4;
+ (void)fetchWatchListStateForWatchListIdentifier:(id)a0 type:(int)a1 completion:(id /* block */)a2;
+ (void)generateMediaContainerWatchListReponseForWatchListIdentifier:(id)a0 type:(int)a1 completion:(id /* block */)a2;
+ (int)watchListTypeForType:(int)a0 isMediaContainer:(BOOL)a1;

@end
