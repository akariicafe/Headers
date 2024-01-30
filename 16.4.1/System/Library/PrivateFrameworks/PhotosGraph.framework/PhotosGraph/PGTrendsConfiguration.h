@class NSString, NSArray;

@interface PGTrendsConfiguration : PGConfiguration <PGTrendsConfigurationProtocol>

@property (readonly, nonatomic) NSString *featureLabel;
@property (readonly, nonatomic) NSArray *validTrendTypes;
@property (readonly, nonatomic) NSArray *positiveScenes;
@property (readonly, nonatomic) NSArray *secondaryPositiveScenes;
@property (readonly, nonatomic) NSArray *positiveDominantScenes;
@property (readonly, nonatomic) NSArray *positiveSemDevScenes;
@property (readonly, nonatomic) NSArray *negativeScenes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
