@class NSUUID, MPNowPlayingContentItem, AVURLAsset, NSArray, NSURL, NSString, NSObject, IMPlayerManifest;
@protocol OS_dispatch_queue;

@interface IMPlayerItem : NSObject

@property (retain, nonatomic) NSArray *chapters;
@property (nonatomic) BOOL areChaptersLoading;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *chapterLoadingQueue;
@property (retain, nonatomic) MPNowPlayingContentItem *contentItem;
@property (retain, nonatomic) NSUUID *instanceIdentifier;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) BOOL areChaptersLoaded;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *author;
@property (nonatomic, getter=isVideo, setter=setIsVideo:) BOOL video;
@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (readonly, nonatomic) AVURLAsset *asset;
@property (nonatomic) double duration;
@property (nonatomic) double playhead;
@property (readonly, weak, nonatomic) NSArray *timeChapters;
@property (readonly, weak, nonatomic) NSArray *metadataChapters;
@property (weak, nonatomic) IMPlayerManifest *manifest;
@property (nonatomic) unsigned long long manifestIndex;

+ (id)createAssetForUrl:(id)a0;

- (id)artworkIdentifier;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)updateActivity:(id)a0;
- (id)subtitle;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)contentItemIdentifier;
- (id)initWithAsset:(id)a0;
- (BOOL)isAssetLoaded;
- (id)externalMetadata;
- (void)invalidateAsset;
- (BOOL)notifyUserIsNotPlayable;
- (void)cleanupAfterError;
- (void)recreateContentItem;
- (void)updateContentItem;
- (void)retrieveArtwork:(id /* block */)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)loadChapters;
- (id)initWithUrl:(id)a0;
- (void)beginLoadingArtworkForAVPlayerItem:(id)a0;
- (BOOL)_isContentItemLoaded;
- (void)retrieveArtwork:(id /* block */)a0 withSize:(struct CGSize { double x0; double x1; })a1 atTime:(double)a2;

@end
