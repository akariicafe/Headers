@class NSDictionary;
@protocol MTConfigDelegate;

@interface MTConfig : MTObject

@property (retain, nonatomic) NSDictionary *debugSource;
@property (weak, nonatomic) id<MTConfigDelegate> delegate;
@property (nonatomic) long long eventDataTimeout;

- (void).cxx_destruct;
- (id)sources;
- (id)injectedSource;
- (BOOL)_isEventDataTimeoutUnset;
- (id)configValueForKeyPath:(id)a0 sources:(id)a1;
- (BOOL)disabledForSources:(id)a0;
- (id)blacklistedEventsForSources:(id)a0;
- (id)blacklistedFieldsForSources:(id)a0;
- (id)deResFieldsForSources:(id)a0;
- (BOOL)metricsDisabledOrBlacklistedEvent:(id)a0 sources:(id)a1;
- (void)removeBlacklistedFields:(id)a0 sources:(id)a1;
- (void)applyDeRes:(id)a0 sources:(id)a1;
- (id)computeWithConfigSources:(id /* block */)a0;
- (id)configValueForKeyPath:(id)a0 default:(id)a1;

@end
