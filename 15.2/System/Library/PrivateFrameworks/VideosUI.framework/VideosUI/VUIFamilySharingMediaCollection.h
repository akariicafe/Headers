@class NSString, VUIFamilySharingEntity, NSArray;

@interface VUIFamilySharingMediaCollection : VUIMediaCollection

@property (retain, nonatomic) VUIFamilySharingEntity *entity;
@property (retain, nonatomic) NSString *artworkURL;
@property (retain, nonatomic) NSString *amsShowIdentifier;
@property (retain, nonatomic) NSString *amsSeasonIdentifier;
@property (retain, nonatomic) NSArray *seasonNumbers;

- (id)seasonNumber;
- (id)releaseDate;
- (id)contentDescription;
- (id)title;
- (id)showTitle;
- (id)contentRating;
- (void).cxx_destruct;
- (id)duration;
- (id)releaseYear;
- (id)genreTitle;
- (id)initWithAMSEntity:(id)a0 requestedProperties:(id)a1 mediaEntityType:(id)a2;
- (id)seasonCount;

@end
