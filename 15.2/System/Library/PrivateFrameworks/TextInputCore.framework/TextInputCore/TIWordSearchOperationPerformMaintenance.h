@class TIMecabraWrapper;

@interface TIWordSearchOperationPerformMaintenance : TIWordSearchOperation

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper;

- (void).cxx_destruct;
- (void)perform;
- (id)initWithMecabraWrapper:(id)a0;

@end
