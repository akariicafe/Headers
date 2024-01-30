@class TIMecabraWrapper;

@interface TIWordSearchOperationAcceptCandidate : TIWordSearchOperation {
    void *_mecabraCandidate;
}

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper;
@property (nonatomic, getter=isPartialCandidate) BOOL partialCandidate;

- (void)perform;
- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWordSearch:(id)a0 mecabraCandidate:(void *)a1 isPartial:(BOOL)a2;

@end
