@class NSArray;
@protocol PXFavoritesSettingsDelegate;

@interface PXFavoritesSettings : PXSettings {
    BOOL _didEncounterUnknownSettingsClassName;
}

@property (weak, nonatomic) id<PXFavoritesSettingsDelegate> delegate;
@property (copy, nonatomic) NSArray *favoritesSettingsClassNames;

+ (id)sharedInstance;
+ (id)transientProperties;
+ (id)favoritesSubmoduleWithFavoritesSettingsKeyPath:(id)a0 delegate:(id)a1;

- (id)parentSettings;
- (id)valueForKey:(id)a0;
- (void)_notifyChange;
- (void).cxx_destruct;
- (void)setIsFavorite:(BOOL)a0 settings:(id)a1;
- (BOOL)isFavoriteSettings:(id)a0;
- (void)_requestFavoriteSettingsAtIndex:(long long)a0 fromViewController:(id)a1 resultHandler:(id /* block */)a2;
- (id)_keyForFavoriteExistingAtIndex:(long long)a0;
- (id)_keyForFavoriteNameAtIndex:(long long)a0;
- (void)_performBlockAfterLoadingAccessorySettings:(id /* block */)a0;

@end
