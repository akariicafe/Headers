@class VUIPlistMediaDatabaseSeason;

@interface VUIPlistSeasonMediaCollection : VUIMediaCollection <VUIPlistMediaEntityImageLoadParamsCreating>

@property (retain, nonatomic) VUIPlistMediaDatabaseSeason *databaseSeason;

- (id)seasonNumber;
- (id)showTitle;
- (void).cxx_destruct;
- (id)_valueForPropertyDescriptor:(id)a0;
- (id)coverArtImageIdentifier;
- (id)imageLoadParamsWithImageType:(unsigned long long)a0;
- (id)initWithMediaLibrary:(id)a0 databaseSeason:(id)a1 requestedProperties:(id)a2;
- (id)initWithMediaLibrary:(id)a0 identifier:(id)a1 requestedProperties:(id)a2 kind:(id)a3;
- (id)mediaItemCount;
- (id)playedState;
- (id)showIdentifier;

@end
