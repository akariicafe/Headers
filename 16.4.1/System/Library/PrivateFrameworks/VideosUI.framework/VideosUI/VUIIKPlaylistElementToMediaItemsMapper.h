@interface VUIIKPlaylistElementToMediaItemsMapper : NSObject

@property (nonatomic) unsigned long long resumeMenuBehavior;

- (id)init;
- (id)_clipMediaItemsMediaItem:(id)a0 fromTimelineElement:(id)a1;
- (id)_createClipMediaItemsIfTimeExists:(id)a0 fromMediaElement:(id)a1;
- (void)_populateMediaItem:(id)a0 withMetadatafromRelatedContentElement:(id)a1;
- (void)_populateMediaItem:(id)a0 withMetadatafromTimelineEventElement:(id)a1;
- (void)_populateMediaItem:(id)a0 withMetadatafromVideoElement:(id)a1;
- (BOOL)_shouldDisableResumeMenuForAsset:(id)a0;
- (id)_storeAuxMediaItemForIKMediaElement:(id)a0 isExtrasContent:(BOOL)a1;
- (id)_storeMediaItemsForAdamID:(long long)a0 IKMediaElement:(id)a1;
- (id)playlistForIKMediaElements:(id)a0 isExtrasContent:(BOOL)a1;
- (id)playlistForIKMediaElements:(id)a0 withMediaItem:(id)a1 isExtrasContent:(BOOL)a2;

@end
