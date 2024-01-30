@interface TISK123KeyEvent : TISKEvent

- (id)description;
- (void)reportInterKeyTiming:(id)a0 previousEvent:(id)a1;
- (id)init:(id)a0 emojiSearchMode:(BOOL)a1 order:(long long)a2;

@end
