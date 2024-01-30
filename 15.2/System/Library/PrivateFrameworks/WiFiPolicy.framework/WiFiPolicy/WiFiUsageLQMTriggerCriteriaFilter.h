@class NSPredicate, NSMutableArray, NSMutableSet;

@interface WiFiUsageLQMTriggerCriteriaFilter : NSObject

@property (retain, nonatomic) NSPredicate *filterSamplesPredicate;
@property (retain, nonatomic) NSMutableArray *criterias;
@property (retain, nonatomic) NSMutableSet *features;

- (id)initWith:(id)a0 forFields:(id)a1 andFeatures:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
