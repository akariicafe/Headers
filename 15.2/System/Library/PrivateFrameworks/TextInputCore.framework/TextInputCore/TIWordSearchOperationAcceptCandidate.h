@class TIMecabraWrapper;

@interface TIWordSearchOperationAcceptCandidate : TIWordSearchOperation {
    void *_mecabraCandidate;
}

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper;
@property (nonatomic, getter=isPartialCandidate) BOOL partialCandidate;

- (void).cxx_destruct;
- (void)perform;
- (void)dealloc;
- (void)cancel;
- (id)initWithWordSearch:(id)a0 mecabraCandidate:(void *)a1 isPartial:(BOOL)a2;

@end
