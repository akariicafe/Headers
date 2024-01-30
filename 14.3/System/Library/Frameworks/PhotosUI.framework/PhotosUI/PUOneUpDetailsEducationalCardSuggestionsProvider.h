@class PUOneUpAccessoryViewControllersManager;

@interface PUOneUpDetailsEducationalCardSuggestionsProvider : PUOneUpSuggestionsProvider

@property (class, nonatomic) BOOL didDisplayEducationalCard;

@property (readonly, nonatomic) PUOneUpAccessoryViewControllersManager *accessoryViewControllersManager;

+ (id)_userDefaults;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canProvideSuggestionForAsset:(id)a0;
- (id)initWithAccessoryViewControllersManager:(id)a0;
- (id)requestSuggestionForAsset:(id)a0 withResultHandler:(id /* block */)a1;

@end
