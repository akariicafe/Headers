@class TISKSessionSamples;

@interface TISKBucketSwitchEvent : TISKEvent

@property (retain, nonatomic) TISKSessionSamples *sessionSamples;

- (id)privateDescription;
- (id)description;
- (void).cxx_destruct;
- (void)reportToSession:(id)a0;
- (id)init:(id)a0 emojiSearchMode:(BOOL)a1 order:(long long)a2;

@end
