@class NSString, VUIFamilySharingEntity, NSArray;

@interface VUIFamilySharingMediaCollection : VUIMediaCollection

@property (retain, nonatomic) VUIFamilySharingEntity *entity;
@property (retain, nonatomic) NSString *artworkURL;
@property (retain, nonatomic) NSString *amsShowIdentifier;
@property (retain, nonatomic) NSString *amsSeasonIdentifier;
@property (retain, nonatomic) NSArray *seasonNumbers;

- (id)releaseDate;
- (id)seasonNumber;
- (id)contentDescription;
- (id)showTitle;
- (id)duration;
- (id)title;
- (void).cxx_destruct;
- (id)contentRating;
- (id)releaseYear;
- (id)genreTitle;
- (id)initWithAMSEntity:(id)a0 requestedProperties:(id)a1 mediaEntityType:(id)a2;
- (id)seasonCount;

@end
