@class VUIPlistMediaDatabaseShow;

@interface VUIPlistShowMediaCollection : VUIMediaCollection <VUIPlistMediaEntityImageLoadParamsCreating>

@property (retain, nonatomic) VUIPlistMediaDatabaseShow *databaseShow;

- (void).cxx_destruct;
- (id)playedState;
- (id)initWithMediaLibrary:(id)a0 identifier:(id)a1 requestedProperties:(id)a2 kind:(id)a3;
- (id)coverArtImageIdentifier;
- (id)imageLoadParamsWithImageType:(unsigned long long)a0;
- (id)_valueForPropertyDescriptor:(id)a0;
- (id)mediaItemCount;
- (id)initWithMediaLibrary:(id)a0 databaseShow:(id)a1 requestedProperties:(id)a2;

@end
