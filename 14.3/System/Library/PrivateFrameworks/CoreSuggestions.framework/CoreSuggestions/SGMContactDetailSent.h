@class PETScalarEventTracker;

@interface SGMContactDetailSent : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 source:(struct SGMDocumentType_ { unsigned long long x0; })a1 detail:(struct SGMContactDetailType_ { unsigned long long x0; })a2 foundIn:(struct SGMContactDetailFoundIn_ { unsigned long long x0; })a3 hasName:(struct SGMTypeSafeBool_ { unsigned long long x0; })a4 tokens:(struct SGMLowCount_ { unsigned long long x0; })a5;

@end
