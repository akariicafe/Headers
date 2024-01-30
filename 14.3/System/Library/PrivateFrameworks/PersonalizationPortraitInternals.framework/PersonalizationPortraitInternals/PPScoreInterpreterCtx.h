@class PPScoreDict;

@interface PPScoreInterpreterCtx : NSObject {
    struct unique_ptr<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue> >, std::__1::default_delete<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue> > > > { struct __compressed_pair<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue> > *, std::__1::default_delete<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue> > > > { struct vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue> > *__value_; } __ptr_; } _stack;
    PPScoreDict *_scoreInputs;
    PPScoreDict *_previousSubscores;
    PPScoreDict *_subscores;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithScoreInputs:(id)a0 previousSubscores:(id)a1 scalarSubscoreCount:(unsigned long long)a2 arraySubscoreCount:(unsigned long long)a3 objectSubscoreCount:(unsigned long long)a4;

@end
