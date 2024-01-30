@class TISKSessionSamples;

@interface TISKBucketSwitchEvent : TISKEvent

@property (retain, nonatomic) TISKSessionSamples *sessionSamples;

- (void).cxx_destruct;
- (id)description;
- (void)reportToSession:(id)a0;
- (id)init:(id)a0 emojiSearchMode:(BOOL)a1 order:(long long)a2;

@end
