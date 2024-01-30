@class TIKeyboardLayout;

@interface TISKLayoutSwitchEvent : TISKTimestampEvent

@property (retain, nonatomic) TIKeyboardLayout *layout;

- (id)description;
- (void).cxx_destruct;
- (double)touchDownTimestamp;
- (id)init:(double)a0 layout:(id)a1 emojiSearchMode:(BOOL)a2 order:(long long)a3;
- (void)reportToSession:(id)a0;
- (double)touchUpTimestamp;

@end
