@class NSString;

@interface TISKPredictionBarEvent : TISKTimestampEvent

@property (nonatomic) BOOL emojiPrediction;
@property (retain, nonatomic) NSString *emojiBucketCategory;

- (id)description;
- (void).cxx_destruct;
- (id)init:(double)a0 emojiPrediction:(BOOL)a1 emojiSearchMode:(BOOL)a2 order:(long long)a3 emojiBucketCategory:(id)a4;
- (void)reportInterKeyTiming:(id)a0 previousEvent:(id)a1;
- (void)reportToSession:(id)a0;

@end
