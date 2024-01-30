@class NSPredicate, NSMutableDictionary;

@interface SignpostSupportSubsystemCategoryFilter : NSObject <SignpostPredicateProducer>

@property (readonly, nonatomic) NSMutableDictionary *subsystemsDict;
@property (readonly, nonatomic) unsigned long long _compoundPredicateType;
@property (readonly, nonatomic) BOOL _wantsNotSubsystem;
@property (readonly, nonatomic) NSPredicate *predicateEquivalent;

- (void).cxx_destruct;
- (void)addSubsystem:(id)a0 category:(id)a1;
- (id)debugDescription;
- (id)_initWithEntries:(id)a0;
- (void)addEntry:(id)a0;
- (void)_fixupToSupportFramerateCalculation;
- (BOOL)passesSubsystem:(id)a0 category:(id)a1;
- (id)liveStreamingPredicate;
- (void)_forceInclusionOfSubsystem:(id)a0 category:(id)a1;
- (id)_subpredicatesForSubsystemsWithIsSimplified:(BOOL)a0;
- (id)_predicateEquivalentWithIsSimplified:(BOOL)a0;
- (BOOL)matchesSubsystem:(id)a0 category:(id)a1;

@end
