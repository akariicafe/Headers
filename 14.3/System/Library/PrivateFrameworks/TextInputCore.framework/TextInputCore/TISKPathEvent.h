@class TIKeyboardTouchEvent, TIKeyboardCandidate;

@interface TISKPathEvent : TISKEvent {
    TIKeyboardCandidate *_candidate;
    TIKeyboardTouchEvent *_pathTouchUp;
}

- (void).cxx_destruct;
- (id)description;
- (void)reportToSession:(id)a0;
- (void)reportInterKeyTiming:(id)a0 previousEvent:(id)a1;
- (BOOL)isMissingATouch;
- (id)init:(id)a0 candidate:(id)a1 emojiSearchMode:(BOOL)a2 order:(long long)a3;

@end
