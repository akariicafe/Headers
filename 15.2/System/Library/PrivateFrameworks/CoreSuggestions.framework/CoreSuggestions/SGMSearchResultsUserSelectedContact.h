@class PETScalarEventTracker;

@interface SGMSearchResultsUserSelectedContact : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)a0 wasSuggestedContact:(struct SGMTypeSafeBool_ { unsigned long long x0; })a1 wasKnownContact:(struct SGMTypeSafeBool_ { unsigned long long x0; })a2 app:(struct SGMContactDetailUsedApp_ { unsigned long long x0; })a3;

@end
