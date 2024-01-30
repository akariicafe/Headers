@class NSString, NSArray;

@interface PGTrendsConfiguration : PGConfiguration

@property (readonly, nonatomic) NSString *featureLabel;
@property (readonly, nonatomic) NSArray *validTrendTypes;
@property (readonly, nonatomic) NSArray *positiveScenes;
@property (readonly, nonatomic) NSArray *secondaryPositiveScenes;
@property (readonly, nonatomic) NSArray *positiveDominantScenes;
@property (readonly, nonatomic) NSArray *positiveSemDevScenes;
@property (readonly, nonatomic) NSArray *negativeScenes;

- (void).cxx_destruct;

@end
