@class MOIntegerSettingMetadata, NSNumber, MOBoolSettingMetadata;

@interface MOMediaSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyBookstoreEroticaMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyExplicitContentMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyMusicServiceMetadata;
@property (class, readonly, nonatomic) MOIntegerSettingMetadata *maximumMovieRatingMetadata;
@property (class, readonly, nonatomic) MOIntegerSettingMetadata *maximumTVShowRatingMetadata;

@property (retain, nonatomic) NSNumber *denyBookstoreErotica;
@property (retain, nonatomic) NSNumber *denyExplicitContent;
@property (retain, nonatomic) NSNumber *denyMusicService;
@property (retain, nonatomic) NSNumber *maximumMovieRating;
@property (retain, nonatomic) NSNumber *maximumTVShowRating;

+ (id)groupName;

@end
