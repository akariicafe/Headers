@class NSArray;

@interface NMSPodcastUpNextMediaItemGroup : NMSMediaItemGroup {
    NSArray *_upNextEpisodes;
    NSArray *_upNextFeedURLs;
}

- (id)itemList;
- (void).cxx_destruct;
- (id)identifiersForContainerType:(unsigned long long)a0;
- (id)_upNextFeedURLs;
- (id)_upNextEpisodes;

@end
