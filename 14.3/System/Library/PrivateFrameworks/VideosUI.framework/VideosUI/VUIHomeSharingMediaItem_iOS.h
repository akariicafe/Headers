@class NSURL, HSHomeSharingLibrary, NSString;

@interface VUIHomeSharingMediaItem_iOS : VUILibraryMediaItem_iOS

@property (retain, nonatomic) HSHomeSharingLibrary *homeSharingLibrary;
@property (retain, nonatomic) NSURL *mediaItemURLInternal;
@property (retain, nonatomic) NSString *keyBagFilePath;
@property (nonatomic) BOOL needsKeyBagSyncPriorToPlayback;
@property (nonatomic) unsigned long long loadingContext;

+ (void)initialize;

- (void).cxx_destruct;
- (id)imageLoader;
- (id)mediaItemMetadataForProperty:(id)a0;
- (id)initWithMPMediaItem:(id)a0;
- (id)mediaItemURL;
- (BOOL)hasTrait:(id)a0;
- (BOOL)_loadingCancelled:(unsigned long long)a0;
- (void)_fetchKeybagForDSID:(id)a0 isFamilyAccount:(BOOL)a1 completion:(id /* block */)a2;
- (void)prepareForLoadingWithCompletion:(id /* block */)a0;
- (void)cleanUpMediaItem;
- (void)updateBookmarkWithSuggestedTime:(double)a0 forElapsedTime:(double)a1 duration:(double)a2 playbackOfMediaItemIsEnding:(BOOL)a3;
- (void)updatePlayCountForElapsedTime:(double)a0 duration:(double)a1;
- (BOOL)shouldRetryPlaybackForError:(id)a0;

@end
