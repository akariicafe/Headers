@class PETScalarEventTracker;

@interface SGMBadInteractionIgnored : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)a0 reason:(struct SGMInteractionIgnoredReason_ { unsigned long long x0; })a1;

@end
