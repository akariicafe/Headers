@class NSSet, NSPredicate;

@interface SignpostSupportExactProcessNameFilter : NSObject <SignpostPredicateProducer>

@property (readonly, nonatomic) unsigned long long _compoundPredicateType;
@property (readonly, nonatomic) BOOL _wantsNotEqual;
@property (readonly, nonatomic) NSSet *processNameSet;
@property (readonly, nonatomic) NSPredicate *predicateEquivalent;

- (void).cxx_destruct;
- (id)init;
- (BOOL)passesProcessName:(id)a0;
- (void)addProcessName:(id)a0;
- (void)addProcessNameSet:(id)a0;

@end
