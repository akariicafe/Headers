@class TIKeyboardCandidate;

@interface TISKCandidateAcceptEvent : TISKEvent

@property (retain, nonatomic) TIKeyboardCandidate *candidate;

- (void).cxx_destruct;
- (id)description;
- (void)reportToSession:(id)a0;
- (id)init:(id)a0 emojiSearchMode:(BOOL)a1 order:(long long)a2;

@end
