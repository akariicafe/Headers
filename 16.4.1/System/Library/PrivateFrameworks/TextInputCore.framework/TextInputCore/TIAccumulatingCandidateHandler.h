@class TIAutocorrectionList;

@interface TIAccumulatingCandidateHandler : NSObject <TICandidateHandler> {
    unsigned long long _status;
}

@property (retain, nonatomic) TIAutocorrectionList *candidates;
@property (readonly, copy, nonatomic) id /* block */ candidateHandler;
@property (readonly, nonatomic) BOOL asynchronous;

- (void)open;
- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (id)initWithHandlerBlock:(id /* block */)a0;
- (void)pushCandidates:(id)a0;

@end
