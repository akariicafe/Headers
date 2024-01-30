@interface PGPeopleWallpaperSuggesterFilteringContext : PGSinglePersonWallpaperAssetSuggesterFilteringContext

@property (nonatomic) double normalizedDeviationForVeryImportantPersons;
@property (nonatomic) double normalizedDeviationForImportantPersons;
@property (nonatomic) BOOL favoritePersonsAreVIPs;
@property (nonatomic) long long minimumPersonImportance;
@property (nonatomic) unsigned long long minimumNumberOfCandidatesForEligiblePerson;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initForPeople;
- (id)initForTopPeople;
- (id)initForTopPeople:(BOOL)a0 withDictionary:(id)a1;

@end
