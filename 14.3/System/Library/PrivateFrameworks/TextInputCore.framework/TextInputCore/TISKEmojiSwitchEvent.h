@interface TISKEmojiSwitchEvent : TISKTimestampEvent

- (id)description;
- (void)reportToSession:(id)a0;
- (id)init:(double)a0 emojiSearchMode:(BOOL)a1 order:(long long)a2;

@end
