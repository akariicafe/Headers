@class PETScalarEventTracker;

@interface SGMSuggestdExitReason : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 exitCode:(unsigned long long)a1;

@end
