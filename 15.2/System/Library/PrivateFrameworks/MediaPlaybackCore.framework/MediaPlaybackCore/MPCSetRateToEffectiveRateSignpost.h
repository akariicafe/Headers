@interface MPCSetRateToEffectiveRateSignpost : MPCAnalyticsPlaybackSignpost

@property (nonatomic) struct OpaqueCMTimebase { } *observedTimebase;
@property (nonatomic) double beginTime;

+ (void)endWithIdentifier:(unsigned long long)a0 error:(id)a1;

- (id)begin;
- (void)dealloc;
- (id)initWithIdentifier:(unsigned long long)a0 item:(id)a1;
- (void)endWithError:(id)a0;
- (void)_removeNotificationObservers;
- (void)_handleItemTimebaseDidChange:(id)a0;
- (void)_observeItemTimebase;

@end
