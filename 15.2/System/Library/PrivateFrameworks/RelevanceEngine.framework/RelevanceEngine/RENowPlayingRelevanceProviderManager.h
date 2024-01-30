@interface RENowPlayingRelevanceProviderManager : RERelevanceProviderManager <RENowPlayingRelevanceProviderManagerProperties> {
    unsigned long long _state;
}

@property (readonly, nonatomic) unsigned long long state;

+ (Class)_relevanceProviderClass;
+ (id)_features;

- (id)initWithQueue:(id)a0;
- (id)_valueForProvider:(id)a0 feature:(id)a1;
- (void)pause;
- (void)resume;
- (void)_updatePlaybackState;

@end
