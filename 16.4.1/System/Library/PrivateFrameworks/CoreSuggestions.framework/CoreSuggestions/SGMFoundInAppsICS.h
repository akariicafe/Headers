@class PETScalarEventTracker;

@interface SGMFoundInAppsICS : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 timezone:(struct SGMFoundInAppsICSTZValue_ { unsigned long long x0; })a1 datetime:(struct SGMFoundInAppsDatetimeType_ { unsigned long long x0; })a2;

@end
