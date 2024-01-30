@class VUIPlistMediaDatabaseShow;

@interface VUIPlistShowMediaCollection : VUIMediaCollection <VUIPlistMediaEntityImageLoadParamsCreating>

@property (retain, nonatomic) VUIPlistMediaDatabaseShow *databaseShow;

- (void).cxx_destruct;
- (id)playedState;
- (id)imageLoadParamsWithImageType:(unsigned long long)a0;
- (id)initWithMediaLibrary:(id)a0 identifier:(id)a1 requestedProperties:(id)a2 kind:(id)a3;
- (id)initWithMediaLibrary:(id)a0 databaseShow:(id)a1 requestedProperties:(id)a2;
- (id)mediaItemCount;
- (id)coverArtImageIdentifier;
- (id)_valueForPropertyDescriptor:(id)a0;

@end
