@class TIKeyboardLayout;

@interface TISKLayoutSwitchEvent : TISKTimestampEvent

@property (retain, nonatomic) TIKeyboardLayout *layout;

- (void).cxx_destruct;
- (id)description;
- (double)touchDownTimestamp;
- (double)touchUpTimestamp;
- (void)reportToSession:(id)a0;
- (id)init:(double)a0 layout:(id)a1 emojiSearchMode:(BOOL)a2 order:(long long)a3;

@end
