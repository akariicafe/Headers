@interface RENowPlayingRelevanceProviderManager : RERelevanceProviderManager <RENowPlayingRelevanceProviderManagerProperties> {
    unsigned long long _state;
}

@property (readonly, nonatomic) unsigned long long state;

+ (id)_features;
+ (Class)_relevanceProviderClass;

- (id)initWithQueue:(id)a0;
- (void)pause;
- (void)resume;
- (id)_valueForProvider:(id)a0 feature:(id)a1;
- (void)_updatePlaybackState;

@end
