@class NSString;

@interface PGMeaningPeopleCriteria : NSObject <PGMeaningCriteria>

@property (nonatomic) unsigned long long minimumNumberOfPeople;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)a0;

- (BOOL)isValid;
- (BOOL)passesForMomentNode:(id)a0;

@end
