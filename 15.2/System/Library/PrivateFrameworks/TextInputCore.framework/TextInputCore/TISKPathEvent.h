@class NSString, TIKeyboardCandidate, NSArray, TIKeyboardTouchEvent;

@interface TISKPathEvent : TISKEvent {
    TIKeyboardCandidate *_candidate;
    NSString *_candidateString;
    TIKeyboardTouchEvent *_pathTouchUp;
    NSArray *_allTouches;
}

- (id)description;
- (void).cxx_destruct;
- (void)reportToSession:(id)a0;
- (void)reportInterKeyTiming:(id)a0 previousEvent:(id)a1;
- (BOOL)isMissingATouch;
- (id)init:(id)a0 candidate:(id)a1 allTouches:(id)a2 emojiSearchMode:(BOOL)a3 order:(long long)a4;
- (double)countPathPauses:(id)a0;

@end
