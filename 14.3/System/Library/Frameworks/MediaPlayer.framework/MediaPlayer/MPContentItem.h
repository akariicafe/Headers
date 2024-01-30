@class NSString, MPMediaItemArtwork;

@interface MPContentItem : NSObject

@property (readonly, nonatomic) void *_mediaRemoteContentItem;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) MPMediaItemArtwork *artwork;
@property (nonatomic) float playbackProgress;
@property (nonatomic, getter=isStreamingContent) BOOL streamingContent;
@property (nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (nonatomic, getter=isContainer) BOOL container;
@property (nonatomic, getter=isPlayable) BOOL playable;

+ (BOOL)isSuppressingChangeNotifications;
+ (void)performSuppressingChangeNotifications:(id /* block */)a0;
+ (void)performChangeImmediately:(id /* block */)a0;
+ (BOOL)shouldPushArtworkData;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (id)initWithExternalRepresentation:(id)a0;
- (id)_initWithMediaRemoteContentItem:(void *)a0;
- (id)createExternalRepresentation;
- (void)_postItemChangedNotificationWithDeltaBlock:(id /* block */)a0;
- (void)_loadArtwork:(id)a0 completion:(id /* block */)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
