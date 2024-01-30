@class PETScalarEventTracker;

@interface SGMContactInBanner : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 app:(struct SGMBannerDisplayApp_ { unsigned long long x0; })a1 extracted:(struct SGMBannerExtractionType_ { unsigned long long x0; })a2 selfId:(struct SGMTypeSafeBool_ { unsigned long long x0; })a3 extractionModelVersion:(unsigned long long)a4 contactDetail:(struct SGMContactDetailType_ { unsigned long long x0; })a5;

@end
