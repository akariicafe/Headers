@interface TISKPredictionBarEvent : TISKTimestampEvent

@property (nonatomic) BOOL emojiPrediction;

- (id)description;
- (void)reportToSession:(id)a0;
- (void)reportInterKeyTiming:(id)a0 previousEvent:(id)a1;
- (id)init:(double)a0 emojiPrediction:(BOOL)a1 emojiSearchMode:(BOOL)a2 order:(long long)a3;

@end
