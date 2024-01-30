@class NSString, VUIFamilySharingEntity, NSArray;

@interface VUIFamilySharingMediaCollection : VUIMediaCollection

@property (retain, nonatomic) VUIFamilySharingEntity *entity;
@property (retain, nonatomic) NSString *artworkURL;
@property (retain, nonatomic) NSString *amsShowIdentifier;
@property (retain, nonatomic) NSString *amsSeasonIdentifier;
@property (retain, nonatomic) NSArray *seasonNumbers;

- (id)releaseDate;
- (id)seasonNumber;
- (void).cxx_destruct;
- (id)contentDescription;
- (id)contentRating;
- (id)duration;
- (id)genreTitle;
- (id)releaseYear;
- (id)showTitle;
- (id)title;
- (id)seasonCount;
- (id)initWithAMSEntity:(id)a0 requestedProperties:(id)a1 mediaEntityType:(id)a2;

@end
