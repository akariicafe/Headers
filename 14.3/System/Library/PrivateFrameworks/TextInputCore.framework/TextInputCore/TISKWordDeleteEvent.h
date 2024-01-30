@interface TISKWordDeleteEvent : TISKTimestampEvent

- (id)description;
- (void)reportToSession:(id)a0;
- (void)reportInterKeyTiming:(id)a0 previousEvent:(id)a1;
- (id)init:(double)a0 emojiSearchMode:(BOOL)a1 order:(long long)a2;

@end
