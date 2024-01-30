@class PETScalarEventTracker;

@interface SGMContactCreated : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 wasSuggestedContact:(struct SGMTypeSafeBool_ { unsigned long long x0; })a1 app:(struct SGMContactDetailUsedApp_ { unsigned long long x0; })a2;

@end
