@class NSDateInterval, NSArray, NSDate;

@interface BMBehaviorDatabaseMetadata : NSObject

@property (readonly, copy, nonatomic) NSDate *miningDate;
@property (readonly, copy, nonatomic) NSDateInterval *eventInterval;
@property (readonly, nonatomic) unsigned long long minimumAbsoluteSupport;
@property (readonly, nonatomic) double minimumConfidence;
@property (readonly, nonatomic) double samplingInterval;
@property (readonly, nonatomic) NSArray *itemTypeIdentifiers;
@property (readonly, nonatomic) NSArray *targetTypeIdentifiers;
@property (readonly, nonatomic) unsigned long long numberOfBaskets;

- (void).cxx_destruct;
- (id)dictionaryRepresntation;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithMiningDate:(id)a0 eventInterval:(id)a1 minimumAbsoluteSupport:(unsigned long long)a2 minimumConfidence:(double)a3 samplingInterval:(double)a4 itemTypeIdentifiers:(id)a5 targetTypeIdentifiers:(id)a6 numberOfBaskets:(unsigned long long)a7;
- (id)initWithDictionary:(id)a0;

@end
