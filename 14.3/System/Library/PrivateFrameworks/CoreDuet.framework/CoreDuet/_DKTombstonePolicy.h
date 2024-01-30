@class NSArray, NSPredicate;

@interface _DKTombstonePolicy : NSObject {
    NSArray *_requirements;
    NSPredicate *_predicateForEventsRequiredToBeTombstoned;
    NSPredicate *_eventPredicateForEventsRequiredToBeTombstoned;
    NSArray *_propertiesToFetchForTombstones;
}

@property (readonly, nonatomic) NSArray *requirements;
@property (readonly, nonatomic) NSPredicate *predicateForEventsRequiredToBeTombstoned;
@property (readonly, nonatomic) NSArray *propertiesToFetchForTombstones;

+ (id)defaultPolicy;

- (id)tombstonesForEvents:(id)a0 resultingFromRequirementsWithIdentifiers:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (id)tombstonesForPartialEvents:(id)a0 resultingFromRequirementsWithIdentifiers:(id *)a1;
- (id)initWithRequirements:(id)a0;

@end
