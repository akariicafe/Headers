@class VUIPlistMediaDatabaseSeason;

@interface VUIPlistSeasonMediaCollection : VUIMediaCollection <VUIPlistMediaEntityImageLoadParamsCreating>

@property (retain, nonatomic) VUIPlistMediaDatabaseSeason *databaseSeason;

- (id)seasonNumber;
- (void).cxx_destruct;
- (id)showTitle;
- (id)playedState;
- (id)imageLoadParamsWithImageType:(unsigned long long)a0;
- (id)initWithMediaLibrary:(id)a0 identifier:(id)a1 requestedProperties:(id)a2 kind:(id)a3;
- (id)showIdentifier;
- (id)initWithMediaLibrary:(id)a0 databaseSeason:(id)a1 requestedProperties:(id)a2;
- (id)mediaItemCount;
- (id)coverArtImageIdentifier;
- (id)_valueForPropertyDescriptor:(id)a0;

@end
