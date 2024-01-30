@class NSMutableDictionary;

@interface NMSMutablePodcastSizeCache : NMSPodcastSizeCache

@property (retain) NSMutableDictionary *mutableRelationshipDict;
@property (retain) NSMutableDictionary *mutableEpisodeSizeInfoDict;

- (void)synchronize;
- (id)init;
- (void).cxx_destruct;
- (id)_currentPodcastSizeDictionary;
- (id)episodeSizeInfoDict;
- (id)itemsForFeedURL:(id)a0;
- (id)relationshipDict;
- (void)setEpisodeSizeInfo:(id)a0 forEpisode:(id)a1;
- (void)setEpisodes:(id)a0 forFeedURL:(id)a1;

@end
