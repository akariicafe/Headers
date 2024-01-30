@class NSDictionary;
@protocol MTConfigDelegate;

@interface MTConfig : MTObject

@property (retain, nonatomic) NSDictionary *debugSource;
@property (weak, nonatomic) id<MTConfigDelegate> delegate;
@property (nonatomic) long long eventDataTimeout;

- (id)sources;
- (void).cxx_destruct;
- (id)configValueForKeyPath:(id)a0 sources:(id)a1;
- (void)removeDenylistedFields:(id)a0 sources:(id)a1;
- (BOOL)_isEventDataTimeoutUnset;
- (void)applyDeRes:(id)a0 sources:(id)a1;
- (id)blacklistedEventsForSources:(id)a0;
- (id)blacklistedFieldsForSources:(id)a0;
- (id)computeWithConfigSources:(id /* block */)a0;
- (id)configValueForKeyPath:(id)a0 default:(id)a1;
- (id)deResFieldsForSources:(id)a0;
- (id)denylistedEventsForSources:(id)a0;
- (id)denylistedFieldsForSources:(id)a0;
- (BOOL)disabledForSources:(id)a0;
- (id)injectedSource;
- (BOOL)metricsDisabledOrBlacklistedEvent:(id)a0 sources:(id)a1;
- (BOOL)metricsDisabledOrDenylistedEvent:(id)a0 sources:(id)a1;
- (void)removeBlacklistedFields:(id)a0 sources:(id)a1;

@end
