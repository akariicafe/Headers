@class PPScoreDict;

@interface PPScoreInterpreterCtx : NSObject {
    struct unique_ptr<std::vector<PPScoreInterpreterValue>, std::default_delete<std::vector<PPScoreInterpreterValue>>> { struct __compressed_pair<std::vector<PPScoreInterpreterValue> *, std::default_delete<std::vector<PPScoreInterpreterValue>>> { void *__value_; } __ptr_; } _stack;
    PPScoreDict *_scoreInputs;
    PPScoreDict *_previousSubscores;
    PPScoreDict *_subscores;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
