@protocol HMDMediaSystemsAggregateDataGeneratorDataSource;

@interface HMDMediaSystemsAggregateDataGenerator : NSObject <HMDMediaGroupsAggregateDataGenerator>

@property (weak) id<HMDMediaSystemsAggregateDataGeneratorDataSource> dataSource;

+ (unsigned long long)deriveSupportedOptionsFromLeftDestination:(id)a0 rightDestination:(id)a1;
+ (id)derivedDestinationForGroup:(id)a0 leftDestination:(id)a1 rightDestination:(id)a2;
+ (id)derivedMediaDestinationIdentifierForGroupIdentifier:(id)a0;
+ (BOOL)isValidLeftDestination:(id)a0 rightDestination:(id)a1;

- (void).cxx_destruct;
- (id)aggregateDataWithDestinations:(id)a0 controllers:(id)a1 groups:(id)a2;
- (id)destinationWithRoleType:(unsigned long long)a0 mediaSystemData:(id)a1 destinations:(id)a2;
- (BOOL)hasRoleType:(unsigned long long)a0 mediaSystemData:(id)a1 destination:(id)a2;
- (id)nameForMediaSystemData:(id)a0 room:(id)a1;
- (id)roomForAllDestinationParentIdentifiers:(id)a0;

@end
