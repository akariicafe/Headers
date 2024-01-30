@class NSSet, NSPredicate;

@interface SignpostSupportPIDFilter : NSObject <SignpostPredicateProducer>

@property (readonly, nonatomic) unsigned long long _compoundPredicateType;
@property (readonly, nonatomic) BOOL _wantsNotEqual;
@property (readonly, nonatomic) NSSet *pidSet;
@property (readonly, nonatomic) NSPredicate *predicateEquivalent;

- (id)init;
- (void).cxx_destruct;
- (BOOL)passesPIDNumber:(id)a0;
- (BOOL)_wantsNotSubsystem;
- (void)addPIDNumber:(id)a0;
- (void)addPIDNumberSet:(id)a0;

@end
