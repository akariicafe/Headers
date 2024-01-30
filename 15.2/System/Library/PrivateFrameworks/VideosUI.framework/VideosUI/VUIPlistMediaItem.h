@class VUIPlistMediaDatabaseItem;

@interface VUIPlistMediaItem : VUIMediaItem <VUIPlistMediaEntityImageLoadParamsCreating>

@property (retain, nonatomic) VUIPlistMediaDatabaseItem *databaseItem;

- (id)seasonNumber;
- (id)isLocal;
- (id)assetType;
- (id)showTitle;
- (void).cxx_destruct;
- (id)seasonTitle;
- (id)seasonIdentifier;
- (id)playedState;
- (id)showIdentifier;
- (id)initWithMediaLibrary:(id)a0 identifier:(id)a1 requestedProperties:(id)a2 kind:(id)a3;
- (id)coverArtImageIdentifier;
- (id)imageLoadParamsWithImageType:(unsigned long long)a0;
- (id)_valueForPropertyDescriptor:(id)a0;
- (id)previewFrameImageIdentifier;
- (id)initWithMediaLibrary:(id)a0 databaseItem:(id)a1 requestedProperties:(id)a2;

@end
