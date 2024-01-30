@class TIKeyboardInput;

@interface TISKInputEvent : TISKEvent {
    double _downErrorDistance;
    double _upErrorDistance;
    BOOL _canComputeErrorDistance;
}

@property (retain, nonatomic) TIKeyboardInput *input;
@property (nonatomic) BOOL ignoreTapData;

+ (id)makeInputEvent:(id)a0 emojiSearchMode:(BOOL)a1 order:(long long)a2 wordSeparator:(id)a3 accentedLanguage:(BOOL)a4;

- (void).cxx_destruct;
- (id)upTouchEvent;
- (void)reportToSession:(id)a0;
- (void)reportInterKeyTiming:(id)a0 previousEvent:(id)a1;
- (BOOL)isMissingATouch;
- (id)init:(id)a0 type:(int)a1 emojiSearchMode:(BOOL)a2 order:(long long)a3;
- (double)downUpTimeDelta;
- (void)_computeErrorDistance;
- (double)touchDownErrorDistance;
- (double)touchUpErrorDistance;

@end
