@class TIMecabraWrapper;

@interface TIWordSearchOperationCancelLastAcceptedCandidate : TIWordSearchOperation

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper;

- (void)perform;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithWordSearch:(id)a0;

@end
