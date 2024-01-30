@class NSSet, NSString, NSMutableSet, NSDate;

@interface CLSInvestigationFeeder : NSObject <CLSInvestigationInterviewDelegate>

@property (readonly, nonatomic) NSMutableSet *focusItems;
@property (retain, nonatomic) NSSet *focusPersonLocalIdentifiers;
@property (nonatomic) unsigned long long locationClusteringAlgorithm;
@property (nonatomic) BOOL allowsInterview;
@property (readonly, nonatomic) NSDate *universalStartDate;
@property (readonly, nonatomic) NSDate *universalEndDate;
@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allItems;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (unsigned long long)numberOfItems;
- (id)itemAtIndex:(unsigned long long)a0;
- (double)behavioralScore;
- (void).cxx_destruct;
- (id)approximateLocation;
- (id)init;
- (unsigned long long)numberOfShinyGemItems;
- (unsigned long long)numberOfRegularGemItems;
- (id)localStartDateComponents;
- (id)localEndDateComponents;
- (void)enumerateItemsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)prepareWithProgressBlock:(id /* block */)a0;
- (unsigned long long)numberOfItemsInInvestigation:(id)a0;
- (void)_enumerateLocationClustersWithGaussians:(id)a0 enumerationBlock:(id /* block */)a1;
- (void)enumeratePersonNames:(id)a0 withGaussiansUsingBlock:(id /* block */)a1;
- (id)_prepareFeederWithProgressBlock:(id /* block */)a0;

@end
