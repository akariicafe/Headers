@class PETScalarEventTracker;

@interface SGMEventBannerRejected : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)a0 app:(struct SGMBannerDisplayApp_ { unsigned long long x0; })a1 category:(struct SGMEventCategory_ { unsigned long long x0; })a2 extracted:(struct SGMEventExtractionType_ { unsigned long long x0; })a3;

@end
