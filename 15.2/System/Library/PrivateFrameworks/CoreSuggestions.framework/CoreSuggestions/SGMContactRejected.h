@class PETScalarEventTracker;

@interface SGMContactRejected : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)a0 app:(struct SGMBannerDisplayApp_ { unsigned long long x0; })a1 extracted:(struct SGMBannerExtractionType_ { unsigned long long x0; })a2 selfId:(struct SGMTypeSafeBool_ { unsigned long long x0; })a3 extractionModelVersion:(unsigned long long)a4 contactDetail:(struct SGMContactDetailType_ { unsigned long long x0; })a5;

@end
