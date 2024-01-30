@class TIMecabraEnvironment;

@interface TIWordSearchOperationContextAcceptCandidate : TIWordSearchOperation {
    void *_mecabraCandidate;
}

@property (retain, nonatomic) TIMecabraEnvironment *mecabraEnvironment;
@property (nonatomic, getter=isPartialCandidate) BOOL partialCandidate;
@property (nonatomic, getter=isPrediction) BOOL prediction;

- (void).cxx_destruct;
- (void)perform;
- (void)dealloc;
- (void)cancel;
- (id)initWithWordSearch:(id)a0 mecabraCandidate:(void *)a1 isPartial:(BOOL)a2 isPrediction:(BOOL)a3;

@end
