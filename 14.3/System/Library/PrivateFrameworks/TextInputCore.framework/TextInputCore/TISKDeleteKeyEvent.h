@interface TISKDeleteKeyEvent : TISKInputEvent

@property (nonatomic) long long deletePostion;

- (id)description;
- (void)reportToSession:(id)a0;
- (void)reportInterKeyTiming:(id)a0 previousEvent:(id)a1;
- (id)init:(id)a0 emojiSearchMode:(BOOL)a1 order:(long long)a2;
- (long long)_metricDeleteKeyPostion;

@end
