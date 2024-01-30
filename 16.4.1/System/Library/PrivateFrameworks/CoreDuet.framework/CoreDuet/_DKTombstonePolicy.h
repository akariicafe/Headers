@class NSArray, NSPredicate;

@interface _DKTombstonePolicy : NSObject {
    NSArray *_requirements;
    NSPredicate *_predicateForEventsRequiredToBeTombstoned;
    NSArray *_propertiesToFetchForTombstones;
    NSPredicate *_eventPredicateForEventsRequiredToBeTombstoned;
}

@property (readonly, nonatomic) NSArray *requirements;
@property (readonly, nonatomic) NSPredicate *predicateForEventsRequiredToBeTombstoned;
@property (readonly, nonatomic) NSArray *propertiesToFetchForTombstones;

+ (id)defaultPolicy;

- (id)initWithRequirements:(id)a0;
- (id)tombstonesForPartialEvents:(id)a0 resultingFromRequirementsWithIdentifiers:(id *)a1;
- (id)init;
- (id)tombstonesForEvents:(id)a0 resultingFromRequirementsWithIdentifiers:(id *)a1;
- (void).cxx_destruct;

@end
