@class NSNumber, VUITVSeriesManagedObject, VUITVSeasonManagedObject;

@interface VUITVEpisodeManagedObject : VUIVideoManagedObject

@property (copy, nonatomic) NSNumber *episodeNumberInSeason;
@property (copy, nonatomic) NSNumber *episodeNumberInSeries;
@property (retain, nonatomic) VUITVSeasonManagedObject *season;
@property (retain, nonatomic) VUITVSeriesManagedObject *series;

+ (id)fetchRequest;

@end
