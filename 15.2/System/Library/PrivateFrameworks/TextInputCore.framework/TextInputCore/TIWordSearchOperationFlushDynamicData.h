@class TIMecabraWrapper;

@interface TIWordSearchOperationFlushDynamicData : TIWordSearchOperation

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper;

- (void).cxx_destruct;
- (void)perform;
- (void)cancel;
- (id)initWithWordSearch:(id)a0;

@end
