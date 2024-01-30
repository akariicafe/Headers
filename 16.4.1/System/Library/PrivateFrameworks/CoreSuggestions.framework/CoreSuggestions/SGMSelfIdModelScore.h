@class PETScalarEventTracker;

@interface SGMSelfIdModelScore : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 model:(struct SGMSelfIdModelType_ { unsigned long long x0; })a1 result:(struct SGMTypeSafeBool_ { unsigned long long x0; })a2 supervision:(struct SGMSelfIdSupervisionType_ { unsigned long long x0; })a3 extractionModelVersion:(unsigned long long)a4;

@end
