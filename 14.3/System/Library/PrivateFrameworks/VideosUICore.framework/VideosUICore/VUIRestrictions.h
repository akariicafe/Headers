@interface VUIRestrictions : NSObject

@property (readonly, nonatomic) BOOL allowsShowingUndownloadedTVShows;
@property (readonly, nonatomic) BOOL allowsShowingUndownloadedMovies;
@property (readonly, nonatomic) BOOL allowsDAUMetricCollection;

+ (id)sharedInstance;

@end
