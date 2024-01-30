@interface TISKCharKeyEvent : TISKInputEvent

@property (nonatomic) long long wordPosition;
@property (nonatomic) BOOL isShortWord;

- (id)privateDescription;
- (id)description;
- (void)reportToSession:(id)a0;
- (void)reportInterKeyTiming:(id)a0 previousEvent:(id)a1;
- (id)init:(id)a0 emojiSearchMode:(BOOL)a1 order:(long long)a2;
- (long long)_metricWordKeyPostion:(long long)a0;

@end
