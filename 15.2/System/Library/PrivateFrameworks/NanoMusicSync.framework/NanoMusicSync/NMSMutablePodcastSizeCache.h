@class NSMutableDictionary;

@interface NMSMutablePodcastSizeCache : NMSPodcastSizeCache

@property (retain) NSMutableDictionary *mutableRelationshipDict;
@property (retain) NSMutableDictionary *mutableEpisodeSizeInfoDict;

- (void).cxx_destruct;
- (id)init;
- (void)synchronize;
- (id)itemsForFeedURL:(id)a0;
- (id)episodeSizeInfoDict;
- (id)relationshipDict;
- (id)_currentPodcastSizeDictionary;
- (void)setEpisodes:(id)a0 forFeedURL:(id)a1;
- (void)setEpisodeSizeInfo:(id)a0 forEpisode:(id)a1;

@end
