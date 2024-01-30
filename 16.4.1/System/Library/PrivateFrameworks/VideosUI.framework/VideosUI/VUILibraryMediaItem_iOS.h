@class MPMediaItem, NSURL, MPMediaLibrary, ML3Track, VUIPlaybackPositionInfo;
@protocol TVImageLoader;

@interface VUILibraryMediaItem_iOS : VUIBaseMediaItem

@property (nonatomic) long long persistentID;
@property (retain, nonatomic) ML3Track *ml3Track;
@property (retain, nonatomic) MPMediaItem *mpMediaItem;
@property (retain, nonatomic) VUIPlaybackPositionInfo *playbackPositionInfo;
@property (retain, nonatomic) NSURL *mediaItemURLInternal;
@property (readonly, nonatomic) MPMediaLibrary *mpMediaLibrary;
@property (readonly, nonatomic) id<TVImageLoader> imageLoader;
@property (nonatomic) BOOL bookmarkDisabled;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_localPlaybackFilePathURL;
- (void)_schedulePlaybackPositionInfoPersistence;
- (BOOL)_supportsBookmarks;
- (void)cleanUpMediaItem;
- (BOOL)hasTrait:(id)a0;
- (id)initWithMPMediaItem:(id)a0;
- (BOOL)isEqualToMediaItem:(id)a0;
- (id)mediaItemMetadataForProperty:(id)a0;
- (id)mediaItemURL;
- (void)prepareForLoadingWithCompletion:(id /* block */)a0;
- (void)updateBookmarkWithSuggestedTime:(double)a0 forElapsedTime:(double)a1 duration:(double)a2 playbackOfMediaItemIsEnding:(BOOL)a3;
- (void)updatePlayCountForElapsedTime:(double)a0 duration:(double)a1;

@end
