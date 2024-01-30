@class TIMecabraWrapper;

@interface TIWordSearchOperationCancelLastAcceptedCandidate : TIWordSearchOperation

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper;

- (void).cxx_destruct;
- (void)perform;
- (void)cancel;
- (id)initWithWordSearch:(id)a0;

@end
