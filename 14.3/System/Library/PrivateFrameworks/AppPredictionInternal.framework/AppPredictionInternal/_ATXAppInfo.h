@class NSString, NSArray, NSDate, NSNumber;

@interface _ATXAppInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL isExtension;
@property (nonatomic) BOOL isEnterpriseApp;
@property (copy, nonatomic) NSDate *installDate;
@property (copy, nonatomic) NSDate *lastLaunch;
@property (copy, nonatomic) NSDate *lastSpotlightLaunch;
@property (copy, nonatomic) NSNumber *averageSecondsBetweenLaunches;
@property (copy, nonatomic) NSNumber *medianSecondsBetweenLaunches;
@property (copy, nonatomic) NSNumber *genreId;
@property (copy, nonatomic) NSArray *subGenreIds;
@property (copy, nonatomic) NSNumber *app2VecCluster;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundleId:(id)a0 isExtension:(BOOL)a1 isEnterpriseApp:(BOOL)a2 installDate:(id)a3 lastLaunch:(id)a4 lastSpotlightLaunch:(id)a5 averageSecondsBetweenLaunches:(id)a6 medianSecondsBetweenLaunches:(id)a7 genreId:(id)a8 subGenreIds:(id)a9 app2VecCluster:(id)a10;

@end
