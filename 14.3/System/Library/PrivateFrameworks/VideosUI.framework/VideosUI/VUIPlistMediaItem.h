@class VUIPlistMediaDatabaseItem;

@interface VUIPlistMediaItem : VUIMediaItem <VUIPlistMediaEntityImageLoadParamsCreating>

@property (retain, nonatomic) VUIPlistMediaDatabaseItem *databaseItem;

- (id)isLocal;
- (id)seasonNumber;
- (id)assetType;
- (void).cxx_destruct;
- (id)showTitle;
- (id)seasonIdentifier;
- (id)playedState;
- (id)imageLoadParamsWithImageType:(unsigned long long)a0;
- (id)initWithMediaLibrary:(id)a0 identifier:(id)a1 requestedProperties:(id)a2 kind:(id)a3;
- (id)showIdentifier;
- (id)seasonTitle;
- (id)initWithMediaLibrary:(id)a0 databaseItem:(id)a1 requestedProperties:(id)a2;
- (id)previewFrameImageIdentifier;
- (id)coverArtImageIdentifier;
- (id)_valueForPropertyDescriptor:(id)a0;

@end
