@class NSSet, NSDate;

@interface PPDecayedFeedbackCounts : NSObject <MLFeatureProvider>

@property (readonly, nonatomic) double engagedExplicitly;
@property (readonly, nonatomic) double engagedImplicitly;
@property (readonly, nonatomic) double rejectedExplicitly;
@property (readonly, nonatomic) double rejectedImplicitly;
@property (readonly, nonatomic) NSDate *latestDate;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)toDictionary;
- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithLatestDate:(id)a0 engagedExplicitly:(double)a1 engagedImplicitly:(double)a2 rejectedExplicitly:(double)a3 rejectedImplicitly:(double)a4;

@end
