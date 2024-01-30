@class NSDate;

@interface BLSHInactiveBudgetBucketEntryCount : NSObject <NSCopying>

@property (readonly, nonatomic) int count;
@property (readonly, nonatomic, getter=isSecondsFidelity) BOOL secondsFidelity;
@property (readonly, nonatomic) NSDate *lastEntryInitialDate;
@property (readonly, nonatomic) NSDate *lastEntryFinalDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)countSpecifier:(id)a0 hasSecondsBudget:(BOOL)a1 isCoalesceAllowed:(BOOL)a2;
- (double)timeIntervalFromLastEntryToDate:(id)a0;

@end
