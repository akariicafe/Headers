@interface FCUserEventHistoryMetadata : NSObject

@property (nonatomic) long long aggregateStoreGenerationTime;
@property (nonatomic) long long aggregateTotalCount;
@property (nonatomic) double meanCountOfEvents;
@property (nonatomic) long long sessionsOnDiskSize;
@property (nonatomic) double standardDeviationOfEvents;
@property (nonatomic) long long totalEventsCount;

+ (id)emptyWithSessionsOnDiskSize:(long long)a0;

- (id)description;
- (id)initWithAggregateStoreGenerationTime:(long long)a0 aggregateTotalCount:(long long)a1 meanCountOfEvents:(double)a2 sessionsOnDiskSize:(long long)a3 standardDeviationOfEvents:(double)a4 totalEventsCount:(long long)a5;

@end
