@class MPAVItem;

@interface MPCAnalyticsPlaybackSignpost : MPCAnalyticsSignpost

@property (weak, nonatomic) MPAVItem *item;

- (void).cxx_destruct;
- (id)initWithIdentifier:(unsigned long long)a0 item:(id)a1;

@end
